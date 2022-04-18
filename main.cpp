#include <iostream>
#include <cstring>
#include "Person.h"

int main()  // מגישים: אילי אזולאי 318249828
            // בנימין ללוש 328944657
{
    cout << endl;
    Person defaultman;
    cout << endl;

    Address IlaiAddress((char*)"azulay", (char*)"hadera", 56745);
    cout << endl;
    Address BenjaminAddress((char*)"lalush", (char*)"raanana", 75675);
    cout << endl;

    Job IlaiJob((char*)"programmer", 26000, NONE) ;
    cout << endl;
    Job BenjaminJob((char*)"programmer", 26000, NONE);
    cout << endl;

    Person ilai((char*)"ilai",(char*)"0507353577",(char*)"ilai@gmail.com", IlaiAddress, IlaiJob);
    cout << endl;
    Person* benjamin = new Person((char*)"benjamin",(char*)"0502450426", (char*)"benjamin@gmail.com", BenjaminAddress, BenjaminJob);
    cout << endl;

    ilai.setWork();
    ilai.OrderFood(IlaiAddress, 60);
    ilai.retire();
    cout << ilai.getName() << " retired" << endl;
    cout << endl;

    benjamin->setWork();
    benjamin->OrderFood(BenjaminAddress,60);
    benjamin->retire();
    cout << benjamin->getName() << " retired" << endl;
    cout << endl;

    delete benjamin;



    
}