#include<iostream>
#include<string.h>
using namespace std;
class String
{
   char arr[200];
public:
    void input()
    {
        cout<<"Enter the string : ";
        cin.getline(arr,200);
    }
    void show()
    {
        cout<<arr<<endl;
    }
    String operator +(String a)
    {
        String res;
        int i,j;
        for(i=0;arr[i] != '\0';i++)
        {
            res.arr[i] = arr[i];
        }
        for(j=0;a.arr[j] != '\0';j++)
        {
            res.arr[i++] = a.arr[j];
        }
        res.arr[i] = '\0';
        return res;
    }
    String operator *(int n)
    {
        String res;
        int i,j,len = 0;
        for(j=0;j<n;j++)
        {
        for(i=0;arr[i] != '\0';i++)
        {
            res.arr[len++] = arr[i];
        }
        }
        res.arr[len] = '\0';
        return res;
    }
    bool operator ==(String a)
    {
        if(strcmp(a.arr,arr) == 0)
            return true;
        else
            return false;
    }
    String Reverse()
    {
        String res;
        int j=0,k,i;
        for(i=0;arr[i] != '\0';i++);
        for(k= i-1;k > -1;k--)
            res.arr[j++] = arr[k];
        res.arr[j] = '\0';
        return res;
    }
    bool isPalin(String a)
    {
        String res;
        res = a.Reverse();
        if(strcmp(res.arr,a.arr) == 0)
            return true;
        else
            return false;
    }
    void lower()
    {
        String res;
        int i;
        for(i=0;arr[i] != '\0';i++)
        {
            if(arr[i] >= 'A' && arr[i] <= 'Z')
                res.arr[i] = arr[i] + 32;
            else
                res.arr[i] = arr[i];
        }
        res.arr[i] = '\0';
        res.show();
    }
    void upper()
    {
        String res;
        int i;
        for(i=0;arr[i] != '\0';i++)
        {
            if(arr[i] >= 'a' && arr[i] <= 'z')
                res.arr[i] = arr[i] - 32;
            else
                res.arr[i] = arr[i];
        }
        res.arr[i] = '\0';
        res.show();
    }
    void toggle()
    {
        String res;
        int i;
        for(i=0;arr[i] != '\0';i++)
        {
            if(arr[i] >= 'A' && arr[i] <= 'Z')
                res.arr[i] = arr[i] + 32;
            else if(arr[i] >= 'a' && arr[i] <= 'z')
                res.arr[i] = arr[i] - 32;
            else
                res.arr[i] = arr[i];
        }
        res.arr[i] = '\0';
        res.show();
    }
    void title()
    {
        String res;
        int i,j,k;
        for(i=0;arr[i] != '\0';i++)
        {
            if(arr[i] >= 'a' && arr[i] <= 'z' && arr[i-1] == ' '|| i == 0 && !(arr[i] >= 'A' && arr[i] <= 'Z'))
                res.arr[i] = arr[i] - 32;
            else
                res.arr[i] = arr[i];
        }
        res.arr[i] = '\0';
        res.show();

    }
    void capitalise()
    {
        String res;
        int i;
        for(i=0;arr[i] != '\0';i++)
        {
            if(i==0 && arr[i] >= 'a' && arr[i] <= 'z')
                res.arr[i] = arr[i] - 32;
            else
                res.arr[i] = arr[i];
        }
        res.arr[i] = '\0';
        res.show();
    }

};
int main()
{
    String s1,s2,s,s3;
    s1.input();
    s2.input();
    s1.show();
    s2.show();
    cout<<"Concatenated string is : ";
    s = s1 + s2;
    s.show();
    cout<<"Reverse of String 1 : ";
    s = s1.Reverse();
    s.show();
    cout<<"Reverse of string 2 : ";
    s = s2.Reverse();
    s.show();
    if(s1 == s2)
        cout<<"Strings are same"<<endl;
    if(s1.isPalin(s1))
        cout<<"String 1 is palindrome "<<endl;
    if(s2.isPalin(s2))
        cout<<"String 2 is palindrome"<<endl;
    cout<<"Replication of string 1 is : ";
    s = s1 * 5;
    s.show();
    cout<<"Toggle case :";
    s1.toggle();
    cout<<"Title case :";
    s1.title();
    cout<<"Upper case :";
    s1.upper();
    cout<<"Lower case :";
    s1.lower();
    cout<<"Capitalize case :";
    s1.capitalise();

    return 0;
}
