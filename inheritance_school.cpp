#include<iostream>
using namespace std;
class Student
{
    protected:
    int admno;
    char name[50];
    int cls;
    public:
    void input()
    {
        cout<<"Enter admission number : ";
        cin>>admno;
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter class : ";
        cin>>cls;
    }
    void show()
    {
        cout<<"Addmission number is "<<admno<<endl;
        cout<<"Name is "<<name<<endl;
        cout<<"Class is "<<cls<<endl;
    }
};
class Teacher
{
    protected:
    int tid;
    char name[50];
    int cls;
    public:
    void input()
    {
        cout<<"Enter Teacher ID : ";
        cin>>tid;
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter class taught by teacher : ";
        cin>>cls;
    }
    void show()
    {
        cout<<"Teacher ID is "<<tid<<endl;
        cout<<"Name is "<<name<<endl;
        cout<<"Class is "<<cls<<endl;
    }
};
class School:public Student, public Teacher
{
    int code;
    char sname[50];
    public:
    void input()
    {
        cout<<"Enter school code : ";
        cin>>code;
        cout<<"Enter School name : ";
        cin>>sname;
        Student::input();
        Teacher::input();
        
    }
    void show()
    {
        cout<<"School code is "<<code<<endl;
        cout<<"School Name is "<<sname<<endl;
        Student::show();
        Teacher::show();
    }
};
int main()
{
    Student s;
    Teacher t;
    School sc;
    s.input();
    s.show();
    t.input();
    t.show();
    sc.input();
    sc.show();
    return 0;
}