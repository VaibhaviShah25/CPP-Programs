//Capitalize Case
#include<iostream>
using namespace std;
int main()
{
    char a[20];
    int i;
    cout<<"Enter a string : ";
    cin>>a;
    cout<<"\nCapitalized string is : "<<endl;
    if(a[0] >='a' && a[0] <= 'z')
    {
        a[0] -= 32;
        cout<<a[0];
        for(i=1; a[i] != '\0'; i++)
        cout<<a[i];

    }
    else
    {
        for(i=0; a[i] != '\0'; i++)
        cout<<a[i];
    }

    cout<<endl;
return 0;
}
