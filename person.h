#include "job.h"
#include "address.h"

class Person
{
    char *name;
    char *phoneNumber;
    char *email;
    int savings;
    Address address;
    Job job;
    
    public:

    Person();
    Person(char const *new_name, char const *new_phoneNumber,char const *new_email, Address newAddress, Job newJob);
    ~Person();
    Person(Person& copyPerson);
    Person& operator = (const Person& assignPerson); 
    void setName(char const *name);
    char *getName();
    void setPhoneNumber(char const *new_phoneNumber);
    char *getPhoneNumber();
    void setEmail(char const *new_email);
    char *getEmail();
    int getSaving();
    void setAddress(char const *newStreet, char const *newCity, int newPostCod);
    int orderfood(Address address, int amount);
    char *getStreet();
    char *getCity();
    int getPostalCode();
    char* getJobTitle();
    void setJobTitle(char const *newTitle);
    int getsalary();
    void setSavings(int new_savings);
    int Work();


    

};