#include<iostream>
#include<string.h>
using namespace std;
class String
{
   char arr[200];
public:
    friend istream& operator >>(istream &x, String &y);
    friend ostream& operator <<(ostream &x, String &y);
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
        for(i=0;arr[i] != 0;i++)
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
    bool isPalin()
    {
        String res;
        int j=0,k,i;
        for(i=0;arr[i] != '\0';i++);
        for(k= i-1;k > -1;k--)
            res.arr[j++] = arr[k];
        res.arr[j] = '\0';
        if(strcmp(res.arr,arr) == 0)
            return true;
        else
            return false;
    }
    void setCharAt(int pos,char ch)
    {
        String res;
        int i;
        for(i=0;arr[i] != '\0';i++)
        {
            if(i==pos)
                res.arr[pos] = ch;
            else
                res.arr[i] = arr[i];
        }
        res.arr[i++] = '\0';
        res.show();
    }
    void CharAt(int pos)
    {
       char res;
       res =  arr[pos];
       cout<<res<<endl;
    }
    void Substring(int start,int ending)
    {
        String res;
        int i,j;
        for(j=0;arr[j] != '\0';j++);
        if(start >= 0 && ending < j)
        {
            j=0;
            for(i=start;i<ending;i++)
                res.arr[j++] = arr[i];
        }
        res.arr[j++] = '\0';
        res.show();
    }
    void indexOf(String a)
    {
        int res,i,j,k,c,cnt=0,pos = -1;
        for(j=0;a.arr[j] != '\0';j++);
        for(i=0;arr[i] != '\0';i++)
        {
            cnt = 0;
            c=0;
            for(k=i;k<j+i;k++)
            {
                if(arr[k] == a.arr[c++])
                {
                    cnt++;
                    continue;
                }

                else
                    break;

            }
            if(cnt == j)
                pos = i;
        }
        cout<<pos<<endl;
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
istream& operator >>(istream &x, String &y)
{
    cout<<"Enter the string : ";
    cin.getline(y.arr,200);
    return x;
}
ostream& operator <<(ostream &x, String &y)
{
    cout<<y.arr<<endl;
    return x;
}
int main()
{
    String s1,s2,s,s3;
    int c;
    cin>>s1;
    cin>>s2;
    cout<<s1;
    cout<<s2;
    cout<<"Concatenated string is : ";
    s = s1 + s2;
    cout<<s;
    cout<<"Reverse of String 1 : ";
    s = s1.Reverse();
    cout<<s;
    cout<<"Reverse of string 2 : ";
    s = s2.Reverse();
    cout<<s;
    if(s1 == s2)
        cout<<"Strings are same"<<endl;
    if(s1.isPalin())
        cout<<"String 1 is palindrome "<<endl;
    if(s2.isPalin())
        cout<<"String 2 is palindrome"<<endl;
    cout<<"Replication of string 1 is : ";
    s = s1 * 5;
    cout<<s;
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
    cout<<"Character changed -> Final String is : "<<endl;
    s1.setCharAt(4,'P');
    cout<<"Substring at (2,7) is : ";
    s1.Substring(2,7);
    cout<<"Character at position 7 is : ";
    s1.CharAt(7);
    cout<<"Index of ";
    s2.show();
    cout<<"is ";
    s1.indexOf(s2);
    return 0;
}
