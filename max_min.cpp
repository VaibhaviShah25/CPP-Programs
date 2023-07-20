#include<iostream>
using namespace std;
int main()
{
    int max,min,i,n,max2=0;
    cout<<"Enter how many numbers are there : "<<endl;
    cin>>n;
    int arr[n];

    cout<<"Enter numbers : ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int min2=arr[0];
    max = arr[0];
    min = arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i] > max)
            max = arr[i];
        else if(arr[i] < min)
            min = arr[i];
    }
    cout<<"Highest number is : "<<max<<"\nLowest number is : "<<min;
    for(i=0;i<n;i++)
    {
        if(arr[i] > max2 && arr[i] != max)
            max2 = arr[i];
        else if(arr[i] < min2 && arr[i] != min)
            min2 = arr[i];

    }
    cout<<endl<<"Second highest number is : "<<max2<<endl<<"Second Lowest number is : "<<min2;
return 0;
}
