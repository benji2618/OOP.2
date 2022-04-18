


class Address
{
    char *street;
    char *city;
    int PostalCode;

    public: 
    
    Address();
    Address(char const *newStr, char const *newCity, int newPoscod);
    ~Address();
    Address(Address& copyAdress);
    Address& operator = (const Address& assignAddress); 
    void setStreet(char const *newStr);
    char *getStreet();
    void setCity(char const *newCity);
    char *getCity();
    void setPostalCode(int newPoscod);
    int getPostalCode();

};