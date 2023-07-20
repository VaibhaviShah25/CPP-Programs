//Program to check whether an array is sorted or not
#include<iostream>
using namespace std;
int main()
{
    int i,j,n,temp,c=0;
    char ch;
    cout<<"Enter how many numbers are there :"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter array elements : "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(a[0]>a[1])
    {
        for(i=n-1;i>0;i--)
        {
            if(a[i]<a[i-1])
                {
                    c++;
                }
            else
            {
                cout<<"Array is not sorted"<<endl;
                break;
            }
        }
        if(c==n-1)
            cout<<"Array is sorted in descending order"<<endl;

    }
    else if(a[0]<a[1])
    {
        for(i=0;i<n-1;i++)
        {
            if(a[i]<a[i+1])
                {
                    c++;
                }
            else
            {
                cout<<"Array is not sorted"<<endl;
                break;
            }
        }
        if(c==n-1)
        cout<<"Array is sorted in ascending order "<<endl;
    }
return 0;
}
