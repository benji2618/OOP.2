#include <iostream>
#include "person.h"

using namespace std;

int main()
{
    Address Hade_Address("David Noi", "Akko", 2431710);
    Job Hade_Job("Manager", 2000, Art);
    Person Hade;
    Person *Hade2 = new Person("HadeB", "050123012", "Hadea@gmail.com", Hade_Address, Hade_Job);
    Hade.setName("Hade");
    Hade.setPhoneNumber("0549752736");
    Hade.setEmail("HadeBayaa@gmail.com");
    Hade.setAddress("Harakon 11", "Ramat Gan", 224123);
    

    cout<<"\n" << endl;
    cout<<"Name is: "<< Hade.getName() << endl;
    cout<<"Phone is: "<< Hade.getPhoneNumber() << endl;
    cout<<"Email is: "<< Hade.getEmail() << endl;
    cout<<"Street is: "<< Hade.getStreet() << endl;
    cout <<"City is: " << Hade.getCity() << endl;
    cout <<"Postal code is: "<< Hade.getPostalCode() << endl;
    Hade.Work();
    cout<<"\n--------------------------------\n" << endl;

    cout<<"Name is: "<< Hade2->getName() << endl;
    cout<<"Phone is: "<< Hade2->getPhoneNumber() << endl;
    cout<<"Email is: "<< Hade2->getEmail() << endl;
    cout<<"Street is: " << Hade2->getStreet() << endl;
    cout<<"City is: " << Hade2->getCity() << endl;
    cout<<"Postal Code is: "<< Hade2->getPostalCode() << endl;
    cout<<"Job title is: " << Hade2->getJobTitle()<<endl;
    cout<<"Salary is: "<< Hade2->getsalary()<< endl;
    cout<<"\n" << endl;

    return 0;
}




