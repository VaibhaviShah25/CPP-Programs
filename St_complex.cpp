//Structure for addition and subtraction of 2 complex numbers
#include<iostream>
using namespace std;
struct Complex
{
    int real,img;
};
int main()
{
   Complex a[2];
   int addr=0,addi=0,subr,subi,i;
   for(i=0;i<2;i++)
   {
       cout<<"Enter real,imaginary part of number "<<i+1<<" : ";
       cin>>a[i].real>>a[i].img;
   }
   subr = a[0].real;
   subi = a[0].img;
   cout<<"Numbers are : ";
   for(i=0;i<2;i++)
   {
       cout<<a[i].real<<"+"<<a[i].img<<"i"<<"\t";
       addr += a[i].real;
       addi += a[i].img;
   }
   subr -= a[i-1].real;
   subi -= a[i-1].img;
   cout<<endl<<"Sum is : "<<addr<<"+"<<addi<<"i"<<endl;
   if(subi < 0)
        cout<<endl<<"Difference is : "<<subr<<subi<<"i"<<endl;
    else
        cout<<endl<<"Difference  is : "<<subr<<"+"<<subi<<"i"<<endl;
return 0;
}
