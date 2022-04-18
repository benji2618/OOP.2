#include <iostream>
#include <cstring>

using namespace std;

class Address
{
    public:

    Address();
    Address(char* street, char* City, int postalCode);
    ~Address();
    void setStreet(char* street);
    char* getStreet();
    void setCity(char* city);
    char* getCity();
    void setPostalCode(int postalCode);
    int getPostalCode();

    private:

    char* street;
    char* city;
    int PostalCode;

};
