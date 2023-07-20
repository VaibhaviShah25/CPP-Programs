//Printing Upper triangular matrix
#include<iostream>
using namespace std;
int main()
{
    int i,j,r,c,k;
    cout<<"Enter number of rows and columns : "<<endl;
    cin>>r>>c;
    int a[r][c];
    cout<<"Enter matrix elements : "<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            cin>>a[i][j];
    }
    cout<<endl;
    cout<<"Entered matrix is : "<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            cout<<a[i][j]<<"\t";
        cout<<endl;
    }
    cout<<endl;
    cout<<"Upper Triangular matrix is : "<<endl;
    for(i=0;i<r;i++)
    {
        for(k=0;k<i;k++)
            cout<<"\t";
        for(j=i;j<c;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
return 0;
}
