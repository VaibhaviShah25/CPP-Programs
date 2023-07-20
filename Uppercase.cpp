#include<iostream>
using namespace std;
int main()
{
    char name[20];
    int i;
    cout<<"Enter your name : "<<endl;
    cin>>name;
    cout<<"Welcome "<<name<<endl;
    for(i=0;  name[i] != '\0';  i++)
    {
        if(name[i]>='a' && name[i] <='z')
        {
            name[i] -= 32;
        }
        cout<<name[i];
    }
    cout<<endl;
return 0;
}
