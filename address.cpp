#include "Address.h"





Address::Address()
{
    cout << "Address default constructor activated" << endl;
    Address::setStreet((char*)" ");
    Address::setCity((char*)" ");
    Address::setPostalCode(0);
    cout << "Street: " << Address::getStreet() << endl;
    cout << "City: " << Address::getCity() << endl;
    cout << "PostalCode: " << Address::getPostalCode() <<endl;
};

Address::Address(char* street, char* City, int postalCode)
{
    cout << "Address constructor activated" << endl;
    Address::setStreet(street);
    Address::setCity(City);
    Address::setPostalCode(postalCode);
    cout << "Street: " << Address::getStreet() << endl;
    cout << "City: " << Address::getCity() << endl;
    cout << "PostalCode: " << Address::getPostalCode() <<endl;
};

Address::~Address() // a person can have only one address
{
    cout << "address destructor is called" << endl;
    delete[] street;
    delete[] city;
    PostalCode = 0;
};

void Address::setStreet(char* street)
{
    while (street == NULL)
    {
        cout << "Input is not valid" << endl;
        cin >> street;
    }
    Address::street = new char[strlen(street)+1];
    strcpy(Address::street, street);
};

char* Address::getStreet()
{
    if(street == NULL)
    {
        cout << "street field is empty" << endl;
        return NULL;
    }
    //cout << "street: " << street <<endl;
    return street;
};

void Address::setCity(char* city)
{
    while (city == NULL)
    {
        cout << "Input is not valid" << endl;
        cin >> city;
    }
    Address::city = new char[strlen(city)+1];
    strcpy(Address::city, city);
};

char* Address::getCity()
{
    if(city == NULL)
    {
        cout << "city field is empty" << endl;
        return NULL;
    }
    //cout << "city: " << city << endl;
    return city;
};

void Address::setPostalCode(int postalCode)
{
    while (postalCode < 0 )
    {
        cout << "postalCode must be above 0" << endl;
        cin >> postalCode;
    }
    
    Address::PostalCode = postalCode;
};

int Address::getPostalCode()
{
    return PostalCode;
}


