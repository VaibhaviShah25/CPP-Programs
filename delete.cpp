//Program to delete a number from array
#include<iostream>
using namespace std;
int main()
{
    int i,n,pos,num;
    cout<<"Enter how many elements are there :"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter numbers : ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the number to be deleted : "<<endl;
    cin>>num;
    for(i=0;i<n;i++)
    {
        if(a[i]==num)
        {
            pos=i;
            break;
        }
    }
    for(i=pos;i<n;i++)
    {
        a[i]=a[i+1];
    }
    n--;
    cout<<"Array after deletion is : "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
return 0;
}
