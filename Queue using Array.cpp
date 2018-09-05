#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
class queuearr
{
private:
    int a[30],front,rear;

public:
    queuearr()
    {
        front=0;
        rear=0;
    }

    ~queuearr()
    {

    }

    void enqueue();
    void dequeue();
    void view();
};

void queuearr::enqueue()
{
    int x;
    if(rear==4)
    {
        cout<<"Queue is OverFlow"<<endl;
    }
    else
    {
        cout<<"Enter the Element:"<<endl;
        cin>>x;
        a[rear]=x;
        rear++;
    }
}

void queuearr::dequeue()
{
    if(front==rear)
    {
        cout<<"Queue is Empty"<<endl;
    }
    else
    {
        cout<<"Deleted element is "<<a[front]<<endl;
        front++;
    }
}

void queuearr::view()
{
    int i;
    if(front==rear)
    {
        cout<<"Queue is Empty"<<endl;
    }
    else
    {
        cout<<"Queue value are :"<<endl;
        for(i=front;i<rear;i++)
        {
            cout<<a[i]<<endl;
        }
    }
}

void main()
{
    queuearr qr;
    int ch=1;
    clrscr());
    cout<<"Queue operation using Array"<<endl;
    while (ch>=1 && ch<=4)
    {
        cout<<"1.Enqueue \t 2.Dequeue \t 3.View \t 4.Exit"<<endl;
        cout<<"Enter your Choice : "<<endl;
        cin>>ch;
        switch (ch)
        {
            case 1:
                qr.enqueue();
                break;
            case 2:
                qr.dequeue();
                break;
            case 3:
                qr.view();
                break;
            case 4:
                exit(0);
        }
    }
}
