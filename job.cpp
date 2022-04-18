#include "Job.h"


Job::Job()
{
    cout << "Job default constructor activated" << endl;
    Job::setTitle((char*)" ");
    Job::setSalary(0);
    Job::setDepartment(NONE);
    cout << "Title: " << Job::getTitle() << endl;
    cout << "Salary: " << Job::getSalary() << endl;
    cout << "Department: " << Job::getDepartment() <<endl;
};

Job::Job(char* title, int salary, DepartmentEnum departmenmt)
{
    cout << "Job constructor activated" << endl;
    Job::setTitle(title);
    Job::setSalary(salary);
    Job::setDepartment(NONE);
    cout << "Title: " << Job::getTitle() << endl;
    cout << "Salary: " << Job::getSalary() << endl;
    cout << "Department: " << Job::getDepartment() <<endl;
};

Job::~Job()
{
    cout << "Job destructor is called" << endl;
    delete title;
};

void Job::setTitle(char* title)
{
    while (title == NULL)
    {
        cout << "Input is not valid" << endl;
        cin >> title;
    }
    Job::title = new char[strlen(title)+1];
    strcpy(Job::title, title);
};

char* Job::getTitle()
{
     if(Job::title == NULL)
    {
        cout << "title field is empty" << endl;
        return NULL;

    }
    //cout << "title: " << Job::title <<endl;
    return Job::title;
};

void Job::setSalary(int salary)
{

    while (salary < 0)
    {
        cout << "Input is not valid" << endl;
        cin >> salary;
    }
    if (strcmp(Job::getTitle(), (char*)"UnEmployed") == 0)
    {
        cout << "Unemployed person can't set a salary, first set a job" << endl;
        return;
    }
    Job::salary = salary;
};

int Job::getSalary()
{

    //cout << Job::salary <<endl;
    return Job::salary;
};

void Job::setDepartment(DepartmentEnum department)
{
    Job::department = department;
};

DepartmentEnum Job::getDepartment()
{
    return Job::department;
};

int Job::Work()
{
    return Job::getSalary();
}

void Job::Retire()
{
    // cout << "You have retired" << endl;
     Job::setTitle((char*)"UnEmployed");
     Job::salary = 0;
     Job::setDepartment(NONE);
}
