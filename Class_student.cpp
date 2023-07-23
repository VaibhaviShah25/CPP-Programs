#include<iostream>
using namespace std;
class Array
{
private:
    int a[20];
    int n,num;

public:
    void input();
    void show();
    int Search();
    void Sort_Asc();
    void Sort_Desc();
};

int main()
{
    Array p,q;
    int i,f1,f2;
    p.input();
    q.input();
    p.show();
    q.show();
    f1 = p.Search();
    cout<<" Number found at "<<f1<<endl;
    f2 = q.Search();
    cout<<" Number found at "<<f2<<endl;
    //p.Sort_Asc();
    //q.Sort_Asc();
    p.Sort_Desc();
    q.Sort_Desc();
    p.show();
    q.show();
    return 0;
}
    void Array::input()
    {
        cout<<"Enter how many numbers are there : "<<endl;
        cin>>n;
        if(n <= 20)
        {
            cout<<"Enter array elements : "<<endl;

            for(int i=0;i<n;i++)
                cin>>a[i];
        }
        else
            cout<<"Please enter less than 20 numbers "<<endl;

    }
    void Array::show()
    {
        for(int i=0;i<n;i++)
            cout<<a[i]<<"\t";
    cout<<endl;
    }
    int Array::Search()
    {
        cout<<endl<<"Enter the number to be searched : "<<endl;
        cin>>num;
        for(int i=0;i<n;i++)
        {
            if(a[i] == num)
                return i;
        }
        return -1;

    }
    void Array::Sort_Asc()
    {
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i] > a[j])
                {
                    int temp;
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
    }
    void Array::Sort_Desc()
    {
       for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i] < a[j])
                {
                    int temp;
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
    }

