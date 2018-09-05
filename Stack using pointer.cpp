#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#define size 10
class stack
{
private:
    int *sp,*top;

public:
    stack()
    {
        sp = new int;
        top=sp;
    }

    ~stack()
    {
        delete sp;
    }

    void push()
    {
        if(top-sp==size)
        {
            cout<<"Stack is full"<<endl;
        }
        else
        {
            cout<<"Enter the Element:"<<endl;
            cin>>*top;
            cout<<"Pushed element is "<<*top<<endl;
            top++;
        }
    }

    void pop()
    {
        if(sp==top)
        {
            cout<<"Stack is Empty"<<endl;
        }
        else
        {
            top--;
            cout<<*top<<" is Poped"<<endl;
        }
    }

    void view()
    {
        if(sp==top)
        {
            cout<<"Stack is Empty"<<endl;
        }
        else
        {
            cout<<"Stack values are:"<<endl;
            for(int *i=sp;i<top;i++ )
            {
                cout<<*i<<endl;
            }
        }
    }
};
void main()
{
    stack s;
    int ch=1;
    clrscr();
    cout<<"Stack Operation using Pointer"<<endl;
    while (ch>=1 && ch<=4)
    {
        cout<<"1.Push \t 2.Pop \t 3.View \t 4.Exit"<<endl;
        cout<<"Enter your Choice: "<<endl;
        cin>>ch;
        switch (ch)
        {
            case 1:
                s.push();
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.view();
                break;
            case 4:
                exit(0);
        }
    }
}
