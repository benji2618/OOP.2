#include <iostream>
#include <cstring>
#include "Address.h"
#include "Job.h"

using namespace std;

class Person
{
    public:

    Person();
    Person(char* name, char* phonenumber, char* email, Address &address, Job &job);
    ~Person();
    void setName(char* setname);
    char* getName();
    void setPhoneNumber(char* setphonenum);
    char* getPhoneNumber(); 
    void setEmail(char* setemail);
    char* getEmail();
    int getSaving();
    int OrderFood(Address address, int price);
    void setWork();
    void initSaving();
    void retire();
    

    private:

    char* name;
    char* phoneNumber;
    char* email;
    int saving;
    Address address;
    Job job;

};

