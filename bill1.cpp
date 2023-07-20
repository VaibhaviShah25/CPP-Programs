//Program to print a bill
#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter how many products are there :"<<endl;
    cin>>n;
    int qty[n],cost[n],amt[n],total=0;
    cout<<"Enter cost and quantity of products :"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"Product "<<i+1<<":";
        cin>>cost[i]>>qty[i];
        amt[i] = cost[i]*qty[i];
        total += amt[i];
    }
    cout<<"----------------------------------------"<<endl;
    cout<<"      BILL      "<<endl;
    cout<<"----------------------------------------"<<endl;
    cout<<"Sr.no.\t"<<"Cost\t"<<"Qty\t"<<"Amt"<<endl;
    for(i=0;i<n;i++)
        {
            cout<<i+1<<"\t"<<cost[i]<<"\t"<<qty[i]<<"\t"<<amt[i]<<endl;

        }

        cout<<"----------------------------------------"<<endl;
        cout<<"TOTAL AMOUNT TO PAY --->" <<total;
return 0;
}
