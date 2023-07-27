#include<iostream>
using namespace std;
class Time
{
    int hrs,mi,sec;
public:
    void input()
    {
        cout<<"Enter time in hrs,min,sec : ";
        cin>>hrs>>mi>>sec;
        cout<<endl;
    }
    void show()
    {
        cout<<"Time is : "<<hrs<<":"<<mi<<":"<<sec<<endl;
    }
    void Greater(Time t)
    {
        cout<<"Greater time is : "<<endl;
        if(hrs > t.hrs)
            cout<<hrs<<":"<<mi<<":"<<sec<<endl;
        else if(hrs == t.hrs && mi > t.mi)
            cout<<hrs<<":"<<mi<<":"<<sec<<endl;
        else if(hrs == t.hrs && mi == t.mi && sec > t.sec)
            cout<<hrs<<":"<<mi<<":"<<sec<<endl;
        else if(hrs == t.hrs && mi == t.mi && sec == t.sec)
            cout<<"Equal time"<<endl;
        else
            cout<<t.hrs<<":"<<t.mi<<":"<<t.sec<<endl;
    }
    Time add(Time t)
    {
        Time res,temp;
        res.hrs = hrs + t.hrs;
        res.mi = mi + t.mi;
        res.sec = sec + t.sec;
        if(res.sec >= 60 && res.sec < 120)
        {
          temp.sec = res.sec - 60;
          res.sec = temp.sec;
          res.mi += 1;
        }
        if(res.mi >= 60 && res.mi < 120)
        {
          temp.mi = res.mi - 60;
          res.mi = temp.mi;
          res.hrs += 1;
        }
        if(res.hrs >= 24)
        {
          temp.hrs = res.hrs - 24;
          res.hrs = temp.hrs;
        }
        return res;

    }
};
int main()
{
    Time m1,m2,s;
    m1.input();
    m2.input();
    m1.show();
    m2.show();
    m1.Greater(m2);
    s = m1.add(m2);
    s.show();
return 0;
}
