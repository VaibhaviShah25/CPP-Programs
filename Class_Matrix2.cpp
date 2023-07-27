#include<iostream>
using namespace std;
class Matrix
{
    int rows,cols,m[50][50],i,j;
public:
    void input();
    void show();
    bool isNull();
    Matrix add(Matrix b);
};
int main()
{
    Matrix m1,m2,s;
    m1.input();
    m2.input();
    m1.show();
    m2.show();
    s = m1.add(m2);
    if(s.isNull())
        cout<<"Addition not possible";
    else
    {
      cout<<"Sum of matrices is : "<<endl;
      s.show();
    }

return 0;
}
void Matrix::input()
{
    cout<<"Enter rows,columns of matrix : ";
    cin>>rows>>cols;
    cout<<"Enter matrix elements : ";
    for(i=0;i<rows;i++)
    {
        for(j = 0;j<cols;j++)
        {
            cin>>m[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
}
void Matrix::show()
{
    cout<<"Entered matrix is : "<<endl;
    for(i=0;i<rows;i++)
    {
        for(j = 0;j<cols;j++)
        {
            cout<<m[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
}
Matrix Matrix::add(Matrix t)
{
    Matrix res;
    res.rows = rows;
    res.cols = cols;
    if(rows == t.rows && cols == t.cols)
    {
        for(i=0;i<rows;i++)
        {
            for(j = 0;j<cols;j++)
            {
                res.m[i][j] = m[i][j] + t.m[i][j];
            }

    }
    }
    else
    {
         for(i=0;i<rows;i++)
        {
            for(j = 0;j<cols;j++)
            {
                res.m[i][j] = 0;
            }
        }
    }
    cout<<endl;
    return res;
}
bool Matrix::isNull()
{
    int c = 0;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            if(m[i][j] == 0)
                c += 1;
        }

    }
    if(c == rows * cols)
        return true;
    else
        return false;
}
