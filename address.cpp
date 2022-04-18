#include <iostream>
#include <string.h>
#include "address.h"

char const EmptyStr[1] = "";

using namespace std; 

Address :: Address()
{
    
    cout<<"The Constructor of Address class is called and initialized with NULL paramters"<<endl;
    this->street = new char[50] + 1;
    if(this->street == NULL)
    {
        cout<<"Not enough Memory for street pointer in class Address"<<endl;
    }
    else { setStreet(EmptyStr); }
    city = new char[50] + 1;
    if(this->city == NULL)
    {
        cout<<"Not enough memory for city pointer in class Address"<<endl;
    }
    else { setCity(EmptyStr); }
    PostalCode = 0;
}

Address :: Address(char const *newStr, char const *newCity, int newPoscod)
{
    setStreet(newStr);
    setCity(newCity);
    setPostalCode(newPoscod);
}



Address :: ~Address()
{
    delete street;
    delete city;
    PostalCode = 0;
    cout<<"Destructor for Address class initalized"<<endl;

}

Address::Address(Address& copyAddress)
{
    *this = copyAddress; 
}

Address& Address::operator = (const Address& assignAddress)
{
    delete[] street; 
    delete[] city; 

    street = new char [strlen(assignAddress.street)+1];
    strcpy(street,assignAddress.street); 

    city = new char [strlen(assignAddress.city)+1];
    strcpy(city,assignAddress.city); 

    PostalCode = assignAddress.PostalCode; 

    return *this; 


}

void Address :: setStreet(char const *newStr)
{
    char *temp = new char[strlen(newStr)];
    strcpy(temp, newStr);
    this->street = temp;
    delete temp;
}

char* Address :: getStreet() { return street; }

void Address :: setCity(char const *newCity)
{
    char *temp = new char[strlen(newCity)];
    strcpy(temp, newCity);
    this->city = temp;
    delete temp;
}

char* Address :: getCity() { return city; }

void Address :: setPostalCode(int newPoscod)
{
    this->PostalCode = newPoscod;
}

int Address :: getPostalCode(){ return PostalCode; }