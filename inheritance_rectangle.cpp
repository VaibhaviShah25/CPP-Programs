#include<iostream>
using namespace std;
class rectangle
{
    protected:
    int l,b;
    public:
    void input()
    {
        cout<<"Enter length : ";
        cin>>l;
        cout<<"Enter breadth : ";
        cin>>b;
    }
    void show()
    {
        cout<<"Lenght is "<<l;
        cout<<endl<<"Breadth is "<<b<<endl;
    }
    void area()
    {
        cout<<"Area is "<<l*b<<endl;
    }
};
class cuboid:public rectangle
{
    private:
    int h,a;
    public:
    void get()
    {
        input();
        cout<<"Enter height : ";
        cin>>h;
    }
    void showw()
    {
        show();
        cout<<"Height is "<<h<<endl;
    }
    void input()
    {
        rectangle::input();
        cout<<"Enter height : ";
        cin>>h;
    }
    void show()
    {
        rectangle::show();
        cout<<"Height is "<<h<<endl;
    }
    void area()
    {
        a = l*b + b * h + h * l;
        cout<<"Area is "<<a<<endl;
    }
};
int main()
{
    rectangle r;
    cuboid c;
    r.input();
    r.show();
    r.area();
    c.input();
    c.show();
    c.area();
    return 0;
}