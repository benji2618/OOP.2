#include "Person.h"

Person::Person()
{
    cout << "Person default constructor activated" << endl;
    Person::setName((char*)" ");
    Person::setPhoneNumber((char*)"0000000000");
    Person::setEmail((char*)" ");
    Person::saving = 0;
    cout << "Name: " << Person::getName() << endl;
    cout << "Phone number: " << Person::getPhoneNumber() << endl;
    cout << "Email: " << Person::getEmail() << endl;

};

Person::Person(char* name, char* phonenumber, char* email, Address &address, Job &job)
{
    Person::setName(name);
    Person::setPhoneNumber(phonenumber);
    Person::setEmail(email);
    Person::initSaving();
    Person::address = address;
    Person::job = job;
    cout << Person::getName() << " constructor is called" << endl;
    cout << "Name: " << Person::getName() << endl;
    cout << "Phone number: " << Person::getPhoneNumber() << endl;
    cout << "Email: " << Person::getEmail() << endl;
    cout << endl;
};

void Person::initSaving()
{
    Person::saving = 0;
};

Person::~Person()
{
    cout << "Person destructor is called" << endl;
    delete[] name;
    delete[] email;
};

void Person::setName(char* setname)
{   
    while (setname == NULL)
    {
        cout << "Input is not valid" << endl;
        cin >> setname;
    }
    name = new char[strlen(setname)+1];
    strcpy(name, setname);
};

char* Person::getName()
{

    //cout << "name: " << Person::name <<endl;
    return Person::name;
};

void Person::setPhoneNumber(char* setphonenum)
{
    int i = 0;
        while (setphonenum == NULL)
        {
        cout << "Input is not valid" << endl;
        cin >> setphonenum;
        }
        while (i < 10)
        {   
            if (strlen(setphonenum) != 10)
            {
            cout << "Phone number must consist 10 digits, enter phone number again >>" << endl;
            cin >> setphonenum;
                while (setphonenum == NULL)
                    {
                    cout << "Input is not valid" << endl;
                    cin >> setphonenum;
                    }
                i = 0;
            }
            
            if ((setphonenum[i] < '0' || setphonenum[i] > '9') || (setphonenum[0] < '0' || setphonenum[0] > '9'))
            {
                cout << "Phone number must consist only numbers" << endl;
                cin >> setphonenum;
                    while (setphonenum == NULL)
                    {
                        cout << "Input is not valid" << endl;
                        cin >> setphonenum;
                    }
            
                i = 0;
            }
            i++;
        }    
    Person::phoneNumber = setphonenum;
};

char* Person::getPhoneNumber()
{
    //cout << "Phone Number: " << Person::phoneNumber <<endl;
    return Person::phoneNumber;
};

void Person::setEmail(char* setemail)
{
    if (setemail == NULL)
    {
        cout << "Invalid input";
        return;
    }
    email = new char[strlen(setemail)+1];
    strcpy(email, setemail);
}

char* Person::getEmail()
{
    //cout << "Email: " << Person::email <<endl;
    return Person::email;
};

int Person::getSaving()
{
    return Person::saving;
};

int Person::OrderFood(Address address, int price)
{
    if (Person::saving > 0 && Person::saving >= price)
    {
        if (address.getCity() != NULL &&  (strcmp(address.getCity(), " ") != 0 && address.getStreet() != NULL &&  (strcmp(address.getCity(), " ") != 0)))
        {
            cout << "food is ordered" << endl;
            Person::saving -= price;            
            cout << "Savings: " << Person::getSaving() << endl;
            return 1;
        }
    }
        cout << "There is not enough savings to make order" << endl;
        return 0;

};

void Person::setWork()
{
    cout << getName() << " worked" << endl;
    Person::saving += job.Work();
    cout << "Savings: " << Person::getSaving() << endl;;

};

void Person::retire()
{
    Person::job.Retire();
}

