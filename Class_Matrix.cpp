#include<iostream>
using namespace std;
class Matrix
{
    int a[50][50];
    int row,col,i,j,c;
public:
    void input()
    {
        cout<<"Enter number of rows,columns : "<<endl;
        cin>>row>>col;
        cout<<"Enter array elements : ";
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
                cin>>a[i][j];
        }
    }
    void show()
    {
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
                cout<<a[i][j]<<"\t";
            cout<<endl;
        }
        cout<<endl;
    }
    void show_diagonal()
    {
        cout<<"Diagonal elements are : "<<endl;
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                if(i==j)
                    cout<<a[i][j];
                else
                    cout<<"\t";
            }
            cout<<endl;

        cout<<endl;
    }
    }
    void Transpose()
    {
        cout<<"Transpose is : "<<endl;
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
                cout<<a[j][i]<<"\t";
            cout<<endl;
        }
        cout<<endl;
    }
    void sum_row()
    {
        for(i=0;i<row;i++)
        {
            c=0;
            cout<<"Sum of row "<<i+1<<" : ";
            for(j=0;j<col;j++)
            {
                c += a[i][j];
            }
            cout<<c<<endl;
        }
        cout<<endl;
    }
};
int main()
{
    Matrix m1;
    m1.input();
    m1.show();
    m1.show_diagonal();
    m1.Transpose();
    m1.sum_row();
return 0;
}
