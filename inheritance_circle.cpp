#include<iostream>
using namespace std;
class circle
{
    protected:
    int r,a;
    public:
    void input()
    {
        cout<<"Enter radius : ";
        cin>>r;
    }
    void show()
    {
        cout<<"Radius is "<<r<<endl;
    }
    void area()
    {
        a = 3.14 * r * r;
        cout<<"Area of circle is "<<a<<endl;
    }
};
class cylinder:public circle
{
    protected:
    int h;
    public:
    void input()
    {
        circle::input();
        cout<<"Enter height : ";
        cin>>h;
    }
    void show()
    {
        circle::show();
        cout<<"Height is "<<h<<endl;
    }
    void area()
    {
        a = 2 * 3.14 * r * h;
        cout<<"Area of cylinder is "<<a<<endl;
    }
};
class cone:public cylinder
{
    private:
    int l;
    public:
    void input()
    {
        cylinder::input();
        cout<<"Enter lateral height : ";
        cin>>l;
    }
    void show()
    {
        cylinder::show();
        cout<<"Lateral height is "<<l<<endl;
    }
    void area()
    {
        a = 3.14*r*r + 3.14*r*l*h;
        cout<<"Area of cone is "<<a<<endl;
    }
};
int main()
{
    cone C;
    circle cy;
    cy.input();
    cy.show();
    cy.area();
    cy.input();
    cy.show();
    cy.area();
    C.input();
    C.show();
    C.area();
    return 0;
}