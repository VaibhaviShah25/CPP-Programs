#include<iostream>
using namespace std;
int main()
{
    char name[20];
    int n=0,i;
    cout<<"Enter your name : "<<endl;
    cin>>name;
    cout<<"Welcome "<<name<<endl;
    for(i=0;  name[i] != '\0';  i++)
    {
       cout<<name[i];
       n++;
    }
    cout<<endl;
return 0;
}
