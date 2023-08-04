//Program to do simple arithmetic calculation using operator overloading for class Time
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
        cout<<hrs<<":"<<mi<<":"<<sec<<endl;
    }
    Time Normalise(Time res)
    {
       Time temp;
       if(res.sec >= 60)
        {
          temp.sec = res.sec % 60;
          res.mi += res.sec / 60;
          res.sec = temp.sec;
        }
        if(res.mi >= 60)
        {
          temp.mi = res.mi % 60;
          res.hrs += res.mi / 60;
          res.mi = temp.mi;

        }
        if(res.hrs >= 12)
        {
          temp.hrs = res.hrs % 12;
          res.hrs = temp.hrs;
        }
        return res;
    }
    bool operator >(Time t)
    {
        if(hrs > t.hrs ||hrs == t.hrs && mi > t.mi || hrs == t.hrs && mi == t.mi && sec > t.sec)
            return true;
        else
            return false;
    }
    Time operator -(Time t)
    {
        Time res,temp;
        res.hrs = hrs - t.hrs;
        res.mi = mi - t.mi;
        res.sec = sec - t.sec;
        temp = Normalise(res);
        return temp;

    }
    bool operator <(Time t)
    {
        if(hrs < t.hrs ||hrs == t.hrs && mi < t.mi|| hrs == t.hrs && mi == t.mi && sec < t.sec)
            return true;
        else
            return false;
    }
    bool operator ==(Time t)
    {
        if(t.hrs == hrs && t.mi == mi && t.sec == sec)
            return true;
        else
            return false;
    }
    Time operator +(Time t)
    {
        Time res,temp;
        res.hrs = hrs + t.hrs;
        res.mi = mi + t.mi;
        res.sec = sec + t.sec;
        temp = Normalise(res);
        return temp;

    }
    void operator++()
    {
        Time res,temp;
        res.hrs = ++hrs;
        res.mi = ++mi;
        res.sec = ++sec;
        temp = Normalise(res);
        temp.show();
    }
};
int main()
{
    Time m1,m2,s;
    m1.input();
    m2.input();
    m1.show();
    m2.show();
    cout<<"Post Increment of Time 1 is : ";
    ++m1;
return 0;
}
