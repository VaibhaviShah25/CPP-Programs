#include<iostream>
using namespace std;
int main()
{

    //pattern 1
   /* for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }*/
    //pattern 2
    /*for(i=5;i>=1;i--)
    {
        for(j=5;j>=i;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }*/
    //pattern 3
    /*for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }*/
    //pattern 4
    /*(i=5;i>=1;i--)
    {
        for(j=i;j<=5;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }*/
    //pattern 5
    /*for(i=5;i>=1;i--)
    {
        for(j=i;j<=5;j++)
        {
            cout<<j%2;
        }
        cout<<endl;
    }*/

    //pattern 6
    /*for(i=1;i<=5;i++)
    {
        for(j=i;j<=5;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }*/
    //pattern 7
    /*for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }*/
    int num,i,temp;
    char ch;
    /*do
    {
    cout<<"Enter how many numbers are there : "<<endl;
    cin>>num;
    int n[num];
    cout<<"Enter any "<<num<<" numbers : "<<endl;
    for(i=0;i<num;i++)
    {
        cin>>n[i];
    }
    cout<<endl<<"Entered numbers are : "<<endl;
    for(i=0;i<num;i++)
    {
        cout<<n[i]<<"\t";
    }
    cout<<endl;
    cout<<"Array after swapping is : "<<endl;
    if(num % 2 == 1)
    {
        for(i=0;i<num/2;i++)
    {
        temp = n[i];
        n[i] = n[i+1+num/2];
        n[i+1+num/2] = temp;

    }
    }
    else
    {
       for(i=0;i<num/2;i++)
    {
        temp = n[i];
        n[i] = n[i+num/2];
        n[i+num/2] = temp;

    }
    }
    for(i=0;i<num;i++)
        cout<<n[i]<<"\t";
    cout<<"Do you want to run again (y/n):"<<endl;
    cin>>ch;
    }while(ch=='y'|| ch == 'Y');*/
    /*cout<<"Enter how many numbers are there : "<<endl;
    cin>>num;
    int n[num];
    cout<<"Enter any "<<num<<" numbers : "<<endl;
    for(i=0;i<num;i++)
    {
        cin>>n[i];
    }
    cout<<endl<<"Entered numbers are : "<<endl;
    for(i=0;i<num;i++)
    {
        cout<<n[i]<<"\t";
    }
    cout<<endl;
    cout<<"Array after swapping is : "<<endl;
    for(i=num-1;i>-1;i--)
    {
        cout<<n[i]<<"\t;
    }*/
    cout<<"Enter how many numbers are there : "<<endl;
    cin>>num;
    int n[num];
    cout<<"Enter any "<<num<<" numbers : "<<endl;
    for(i=0;i<num;i++)
    {
        cin>>n[i];
    }
    cout<<endl<<"Entered numbers are : "<<endl;
    for(i=0;i<num;i++)
    {
        cout<<n[i]<<"\t";
    }
    cout<<endl;
    cout<<"Array after swapping is : "<<endl;

    for(i=0;i<num;i+=2)
    {
        if(i+1 != num)
        {
        temp = n[i];
        n[i] = n[i+1];
        n[i+1] = temp;
        }
    }
    for(i=0;i<num;i++)
        cout<<n[i]<<"\t";
return 0;
}
