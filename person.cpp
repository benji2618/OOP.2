#include <iostream>
#include <string.h>
#include "person.h"

char const EMPTYSTRING[1] = "";

using namespace std;

Person :: Person()
{
    cout<<"The Constructor of Person class is called and initialized with NULL paramters"<<endl;
    
    this->name = new char[50];
    this->phoneNumber = new char[10];
    this->email = new char[50];
    if(name == NULL)
    {
        cout<<"There's no enough memory for name pointer in Person class"<<endl;
    }
    else { setName(EMPTYSTRING); } 
    if(this->phoneNumber == NULL)
    {
        cout<<"There's no enough memory for phonenumber pointer in Person class"<<endl;
    }
    else { this->phoneNumber[0] = '0'; }

    this->address.setStreet(EMPTYSTRING);
    this->savings = 0;
}
  
Person :: Person(char const *new_name, char const *new_phoneNumber,char const *new_email, Address newAddress, Job newJob)
{   
    this->name = new char[50];
    this->phoneNumber = new char[10];
    this->email = new char [50];

if(this->name == NULL)
    cout << "There's no enough memroy for name pointer in Person class" << endl;
if(this->phoneNumber == NULL)
    cout << "There's no enough memroy for phonenumber pointer in Person class" << endl;
if(this->email == NULL)
    cout << "There's no enough memroy for email pointer in Person class" << endl;

setName(new_name);
setPhoneNumber(new_phoneNumber);
setEmail(new_email);
this->address = newAddress;
this->job = newJob;
}

Person :: ~Person()
{
    delete this->name;
    delete this->phoneNumber;
    delete this->email;
    cout<<"Destructor for Person class initalized"<<endl;
}

Person::Person(Person& copyPerson)
{
    *this = copyPerson; 
}

Person& Person::operator = (const Person& assignPerson)
{ 
    delete[] name; 
    delete[] phoneNumber; 
    delete [] email; 

    name = new char[strlen(assignPerson.name)+1]; 
    strcpy(name,assignPerson.name); 

    phoneNumber = new char[strlen(assignPerson.phoneNumber)+1]; 
    strcpy(phoneNumber, assignPerson.phoneNumber); 

    email = new char[strlen(assignPerson.email)+1]; 
    strcpy(email, assignPerson.email); 
    
    savings = assignPerson.savings; 

    address = assignPerson.address; 
    job = assignPerson.job; 
    
    return *this; 
}
void Person :: setName(char const *name)
{
    strcpy(this->name, name);
}

char* Person :: getName()
{
    return this->name;
}

void Person :: setPhoneNumber(char const *new_phoneNumber)
{
    if(new_phoneNumber[0] != '0')
    {
        cout<<"Error! a phonenumber only can start with 0" <<endl;
    }
    else
    {
        strcpy(this->phoneNumber, new_phoneNumber);
    }
}

char* Person :: getPhoneNumber()
{
    return this->phoneNumber;
}

void Person :: setEmail(char const *new_email)
{
    strcpy(this->email, new_email);
}

char* Person :: getEmail()
{
    return this->email;
}

int Person :: getSaving()
{
    return this->savings;
}

int Person :: orderfood(Address address, int amount)
{
    if(this->savings > 0)
    {
        this->savings -= amount * 55; // I chose that product price is 75
        return 1;
    }
    else
    {
        cout<<"insufficent funds, you can not order food you don't have money in your savings!" << endl;
        return 0;
    }
}

void Person :: setSavings(int new_savings)
{
    if(new_savings < 0)
    {
        cout<<"You can not get in minus in your savings" <<endl;
    }
    else
    {
        new_savings = (0.70) * (getsalary()); // I chose that a person will save 70% of his salary
        this->savings = new_savings;
    }
}

void Person :: setAddress(char const *newStreet, char const *newCity, int newPostCod)
{
    char *tempStr = new char[50];
    char *tempCty = new char[50];
        if(tempStr == NULL)
            cout<<"temp in setAddress function in person.cpp has no enough memorry"<<endl;
        if(tempCty == NULL)
            cout<<"temp2 in setAddress function in person.cpp has no enough memorry"<<endl;
    strcpy(tempStr, newStreet);
    strcpy(tempCty, newCity);
    this->address.setPostalCode(newPostCod);
    this->address.setStreet(tempStr);
    this->address.setCity(tempCty);
    delete tempStr;
    delete tempCty;
    
}

int Person :: Work()
{
    setSavings(0.7 * getsalary());
    return this->getsalary();
}

char* Person :: getStreet()
{
    return this->address.getStreet();
}

char* Person :: getCity()
{
    return this->address.getCity();
}

int Person :: getPostalCode()
{
    return this->address.getPostalCode();
}

char* Person :: getJobTitle()
{
    return this->job.getTitle();
}

void Person :: setJobTitle(char const *newTitle)
{
    this->job.setTitle(newTitle);
}

int Person :: getsalary()
{
    return this->job.getSalary();
}
