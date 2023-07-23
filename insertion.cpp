#include<iostream>
using namespace std;
int main()
{
    int n=6,i,num,pos;
    char ch;
    int a[10]={10,20,30,40,50,60};

    do
    {
    if(n==10)
        {
        cout<<"Array is full. Insertion not possible"<<endl;
        break;
        }
    else
    {
      cout<<"Enter the position to enter :"<<endl;
      cin>>pos;
      cout<<"Enter the number to be inserted :"<<endl;
      cin>>num;
      for(i=n;i>=pos;i--)
      {
        a[i]=a[i-1];
      }
      a[pos] = num;
      n++;
      cout<<"Array after insertion is:"<<endl;
      for(i=0;i<n;i++)
        cout<<a[i]<<endl;
    }
    cout<<"Do you want to insert again(Y/y):"<<endl;
    cin>>ch;
    }while(ch=='Y' || ch=='y');
    return 0;
}
