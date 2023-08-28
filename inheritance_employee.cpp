#include<iostream>
using namespace std;
class Employee
{
    protected:
    int empid;
    char name[50];
    long int salary;
    public:
    void input()
    {
        cout<<"Enter Employee ID : ";
        cin>>empid;
        cout<<"Enter Employee name : ";
        cin>>name;
        cout<<"Enter Employee Salary : ";
        cin>>salary;
    }
    void show()
    {
        cout<<"Employee ID is "<<empid<<endl;
        cout<<"Employee name is "<<name<<endl;
        cout<<"EMployee Salary is "<<salary<<endl;
    }
};
class Salesman:public Employee
{
    protected:
    int msales;
    int comm,total;
    public:
    void input()
    {
        Employee::input();
        cout<<"Enter monthly sales : ";
        cin>>msales;
    }
    void show()
    {
        Employee::show();
        cout<<"Monthly sales are "<<msales<<endl;;
        comm = 0.1 * msales;
        cout<<"Commission is "<<comm<<endl;
    }
    void totalsal()
    {
        total = salary + comm;
        cout<<"Total salary is "<<total<<endl;
    }
};
class Worker:public Employee
{
    protected:
    int overtime;
    int wages,total;
    public:
    void input()
    {
        Employee::input();
        cout<<"Enter overtime done in hours  : ";
        cin>>overtime;
    }
    void show()
    {
        Employee::show();
        cout<<"Overtime hours are "<<overtime<<endl;;
        wages = overtime * 500;
        cout<<"Wages is "<<wages<<endl;
    }
    void totalsal()
    {
        total = salary + wages;
        cout<<"Total salary is "<<total<<endl;
    }
};
class Manager:public Employee
{
    protected:
    int shares;
    public:
    void input()
    {
        Employee::input();
        cout<<"Enter shares owned : ";
        cin>>shares;
    }
    void show()
    {
        Employee::show();
        cout<<"Monthly shares are "<<shares<<endl;;
    }
};
int main()
{
    Employee e1;
    Salesman s;
    Worker w;
    Manager m;
    int ch;
    while(true)
    {
    cout<<"Press 1 - Add and show Employee details "<<endl;
    cout<<"Press 2 - Add and show Salesman details "<<endl;
    cout<<"Press 3 - Add and show Worker details "<<endl;
    cout<<"Press 4 - Add and show Manager details "<<endl;
    cout<<"Press 5 - EXIT"<<endl;
    cout<<"Enter your choice : ";
    cin>>ch;
    if(ch == 1)
    {
        e1.input();
        e1.show();
    }
    else if(ch == 2)
    {
        s.input();
        s.show();
        s.totalsal();
    }
    else if(ch == 3)
    {
        w.input();
        w.show();
        w.totalsal();
    }
    else if(ch==4)
    {
        m.input();
        m.show();
    }
    else
    {
        break;
    }
    }
    return 0;

}
