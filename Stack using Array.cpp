#include <iostream.h>
#include<conio.h>
class stack
{
public:
    int a[10],n,m,top;

    stack()
    {
        n=5;
        top=0;
    }
    void push();
    void pop();
    void display();
};

void stack::push()
{
    if(top==n)
    {
        cout<<"Stack is Full \n";
    }
    else
    {
        cout << "Enter the Value: \n";
        cin >> m;
        a[top] = m;
        top++;
    }
}

void stack::pop()
{
    int b;
    if(top==0)
    {
        cout<<"Stack is Empty \n";
    }
    else
    {
        top--;
        b=a[top];
        cout<<"The Deleted Element is "<<b<<"\n";
    }
}

void stack::display(){
    if(top==0)
    {
        cout<<"Stack is Empty \n";
    }
    else
    {
        cout<<"Elements in Stack are : \n";
        for(int i=top-1;i>=0;i--)
        {
            cout<<a[i]<<"\n";
        }
    }
}

void main()
{
    stack ob;
    int ch;
    clrscr();
    cout<<"Stack Operation \n";
    do
    {
        cout<<"1.Push \t 2.Pop \t 3.View \t 4.Exit \n";
        cin>>ch;
        switch (ch)
        {
            case 1:
                ob.push();
                break;
            case 2:
                ob.pop();
                break;
            case 3:
                ob.display();
                break;
            case 4:
                break;
            default:
                cout<<"Entered wrong Option";
        }
    }
    while (ch<=3);
}
