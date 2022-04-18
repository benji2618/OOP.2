#include <iostream>
#include <cstring>

using namespace std;

enum DepartmentEnum{NONE, Product, Sales, Marketing, Art};

class Job
{
    public:

    Job();
    Job(char* title, int salary, DepartmentEnum departmenmt);
    ~Job();
    void setTitle(char* title);
    char* getTitle();
    void setSalary(int salary); // קובע את השכר שלו
    int getSalary();
    void setDepartment(DepartmentEnum department);
    DepartmentEnum getDepartment();
    int Work(); // קריאה לפונקציה עושה קבלת משכורת
    void Retire();

    private:

    char* title;
    int salary;
    DepartmentEnum department;
};