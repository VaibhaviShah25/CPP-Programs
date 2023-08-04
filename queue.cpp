#include<iostream>
using namespace std;
const int MAX = 10;
void enque(int que[], int &front, int &rear, int value)
{
    if(front == 0 && rear == MAX - 1 || front == rear + 1)
        cout<<"Queue is full- Queue overflow"<<endl;
    else if(front == -1)
    {
        front = rear = 0;
        que[0] = value;
    }
    else
    {
        if(front != 0 && rear == MAX)
        {
            rear = rear % MAX;
            que[rear] = value;
        }
        else
        {
            rear++;
            que[rear] = value;
        }

    }

}
int deque(int que[], int &front, int &rear)

{   int val = 0;
    if(front == -1)
        cout<<"Deletion not possible-Queue Underflow"<<endl;
    else if(front == rear)
    {
        val = que[front];
        front = rear = -1;
    }

    else
    {
        val = que[front];
        if(front == MAX-1)
            front = 0;
        else
            front++;
    }
    return val;
}
void display(int que[],int &front,int &rear)
{
    if(front == rear)
        cout<<"No element found"<<endl;
    else
    {
        if(front > rear)
        {
            for(int i=front;i<= MAX-1;i++)
                cout<<que[i]<<endl;
            for(int i=0;i<=rear;i++)
                cout<<que[i]<<endl;
        }
        else
        {
           for(int i=front;i<= rear;i++)
                cout<<que[i]<<endl;
        }

    }
}
int main()
{
    int choice,front=-1,rear=-1,que[10],num;

    while(true)
    {
        cout<<"Enter 1 - ADD AN ELEMENT"<<endl;
        cout<<"Enter 2 - DELETE AN ELEMENT"<<endl;
        cout<<"Enter 3 - DISPLAY ELEMENTS"<<endl;
        cout<<"Enter 4 - EXIT"<<endl;
        cout<<"Enter your choice : "<<endl;
        cin>>choice;
        if(choice == 1)
        {
            cout<<"Enter the value to be inserted : "<<endl;
            cin>>num;
            enque(que,front,rear,num);
        }
        else if(choice == 2)
        {
            int num = deque(que,front,rear);
            if(num != 0)
                cout<<"Deleted element is : "<<num<<endl;
        }
        else if(choice == 3)
        {
            display(que,front,rear);
        }
        else
            break;
    }
return 0;
}
