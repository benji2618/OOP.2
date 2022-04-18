#include <iostream>
#include <string.h>
#include "job.h"

char const emptystr[1] = "";

using namespace std;

Job :: Job()
{
  
  cout<<"The Constructor of Job class is called and initialized with NULL paramters"<<endl;

  this->title = new char[40] + 1;
  if(this->title == NULL)
  {
    cout<<"There's no enough memory for title in job class\n"<<endl;
  }
  setTitle(emptystr);
  setSalary(0);
}

Job :: ~Job()
{
   delete this->title;
   cout<<"Destructor for Job class initalized"<<endl;
}

Job :: Job (char const *Title, int Salary, departmentenum department)
{
  setTitle(Title);
  setSalary(Salary);
  setDepartment(department);
}

Job::Job(Job& copyJob)
{
  *this = copyJob;  
}

Job& Job:: operator = (const Job& assignJob)
{
  delete [] title; 
  title = new char[strlen(assignJob.title)+1]; 
  strcpy(title,assignJob.title); 
  salary = assignJob.salary; 
  department = assignJob.department; 
  return *this; 
}

void Job :: setTitle(char const *new_title)
{
  this->title = new char[strlen(new_title)];
  strcpy(this->title, new_title);
}

char* Job:: getTitle() { return this->title; }

void Job :: setSalary(int Salary)
{
  if(Salary < 0 )
  {
    cout<<"Error! salary cannot be minus\n"<<endl;
  }
  else
  {
    this->salary = Salary;
  }
}

int Job :: getSalary() { return this->salary; }

void Job :: setDepartment(departmentenum department)
{
  
  if(department > 4)
  {
    cout<<"Error! department must be between 0 - 4!\n"<<endl;
  }
  else if (department == 0)
  {
    setSalary(0);
  }
  else
  {  
    this->department = department;
  }
}

departmentenum Job :: getDepartment() { return this->department; }

void Job :: Retire()
{
  setTitle(emptystr);
  setDepartment(NONE);
  setSalary(0);
}