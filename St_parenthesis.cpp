//Program to check whether the parenthesis match or not using stack
#include<iostream>
using namespace std;
void push(char arr[],int &top, char val)
{
    if(top==9)
        cout<<"Stack Overflow-insertion impossible "<<endl;
    else
    {
        top++;
        arr[top] = val;
    }
}
int pop(char arr[],int &top)
{
    if(top==-1)
    {
        //cout<<"Stack Underflow-deletion impossible "<<endl;
        return 0;
    }
    else
    {
        return arr[top--];
    }
}
void display(char arr[],int &top)
{
    if(top==-1)
        cout<<"Stack Underflow "<<endl;
    for(int i=top;i>=0;i--)
        cout<<arr[i]<<endl;
}
int main()
{
    int top = -1;
    int i,choice,val,j=0;
    char infix[20],a[10];
    cout<<"Enter infix expression : ";
    cin>>infix;
    for(i=0;infix[i] != '\0';i++)
    {
        if(infix[i] == '(')
            push(a,top,infix[i]);
        else if(infix[i] == ')' && pop(a,top) == 0)
        {
           top = 1;
           break;
        }
    }
    if(top==-1)
        cout<<"Parenthesis match"<<endl;
    else if(top==1)
        cout<<"Extra Closing Parenthesis "<<endl;
    else
        cout<<"Extra Opening Parenthesis "<<endl;
return 0;
}
