enum departmentenum {NONE,Product, Sales, Marketing, Art};

class Job
{
    char* title;
    int salary;
    departmentenum department;

    public:

    Job();
    Job (char const *Title, int Salary, departmentenum department);
    ~Job();
    Job(Job& copyJob); 
    Job& operator = (const Job& assignJob); 
    void setTitle(char const *title);
    char *getTitle();
    void setSalary(int Salary);
    int getSalary();
    void setDepartment(departmentenum department);
    departmentenum getDepartment();
    void Retire();

};