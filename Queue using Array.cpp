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
        cout<<"Queue is OverFlow \n";
    }
    else
    {
        cout<<"Enter the Element: \n";
        cin>>x;
        a[rear]=x;
        rear++;
    }
}

void queuearr::dequeue()
{
    if(front==rear)
    {
        cout<<"Queue is Empty \n";
    }
    else
    {
        cout<<"Deleted element is "<<a[front]<<"\n";
        front++;
    }
}

void queuearr::view()
{
    int i;
    if(front==rear)
    {
        cout<<"Queue is Empty \n";
    }
    else
    {
        cout<<"Queue value are : \n";
        for(i=front;i<rear;i++)
        {
            cout<<a[i]<<"\n";
        }
    }
}

void main()
{
    queuearr qr;
    int ch=1;
    clrscr();
    cout<<"Queue operation using Array \n";
    while (ch>=1 && ch<=4)
    {
        cout<<"1.Enqueue \t 2.Dequeue \t 3.View \t 4.Exit \n";
        cout<<"Enter your Choice :  \n";
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
