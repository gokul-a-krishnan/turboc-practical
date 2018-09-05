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
            cout<<"Stack is full \n";
        }
        else
        {
            cout<<"Enter the Element: \n";
            cin>>*top;
            cout<<"Pushed element is "<<*top<<"\n";
            top++;
        }
    }

    void pop()
    {
        if(sp==top)
        {
            cout<<"Stack is Empty \n";
        }
        else
        {
            top--;
            cout<<*top<<" is Poped \n";
        }
    }

    void view()
    {
        if(sp==top)
        {
            cout<<"Stack is Empty \n";
        }
        else
        {
            cout<<"Stack values are: \n";
            for(int *i=sp;i<top;i++ )
            {
                cout<<*i<<"\n";
            }
        }
    }
};
void main()
{
    stack s;
    int ch=1;
    clrscr();
    cout<<"Stack Operation using Pointer \n";
    while (ch>=1 && ch<=4)
    {
        cout<<"1.Push \t 2.Pop \t 3.View \t 4.Exit \n";
        cout<<"Enter your Choice:  \n";
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
