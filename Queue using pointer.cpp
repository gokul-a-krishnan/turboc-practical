#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#define size 10

class queueptr
{
private:
    int *rear,*front;
public:
    queueptr()
    {
        front = new int;
        rear = front;
    }

    ~queueptr()
    {
        delete front;
    }

    void enqueue()
    {
        if (rear-front == size)
        {
            cout<<"Queue is Full \n";
        }
        else
        {
            cout<<"Enter the Element : \n";
            cin>>*rear;
            cout<<"Entered Element is "<<*rear<<"\n";
            rear++;
        }
    }

    void dequeue()
    {
        if(front==rear)
        {
            cout<<"Queue is Empty \n";
        }
        else
        {
            cout<<*front<<" is Deleted \n";
            front++;
        }
    }

    void disp()
    {
        if(front==rear)
        {
            cout<<"Queue is Empty \n";
        }
        else
        {
            cout<<"Queue values are  \n";
            for(int *i=front;i<rear;i++)
            {
                cout << *i << "\n";
            }
        }
    }
};

void main() {
    queueptr q;
    int ch=1;
    clrscr();
    cout<<"Queue using Pointer \n";
    while (ch>=1 && ch<=4)
    {
        cout<<"1.Enqueue \t 2.Dequeue \t 3.View \t 4.Exit \n";
        cout<<"Enter your Choice: \n";
        cin>>ch;
        switch (ch)
        {
            case 1:
                q.enqueue();
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                q.disp();
                break;
            case 4:
                exit(0);
        }
    }
}
