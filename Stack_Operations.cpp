#include<iostream>
using namespace std;

class Stack
{
  int s[100],top,n;
public:
    Stack()
    {
        n=5;
        top=-1;
    }
    Stack(int n)
    {
        this->n=n;
        top=-1;
    }
void push(int x)
{
    if(top>=n-1)
    {
        cout<<"stack overflow\n";
        return;
    }
    top+=1;
    s[top]=x;
    return;
}

int pop()
{
    if(top==-1)
    {
        cout<<"stack underflow\n";
        return -1;
    }
    int temp=s[top];
    top-=1;
    return temp;
}

int peek()
{
    if(top==-1)
    {
        cout<<"stack underflow\n";
        return -1;
    }
    return s[top];
}


int peep(int i)
{
    if((top-i+1)<=-1)
    {
        cout<<"stack underflow\n";
        return -1;
    }
    return s[top-i+1];
}

int change(int i,int x)
{
    if((top-i+1)<=-1)
    {
        cout<<"stack underflow\n";
        return -1;
    }
    s[top-i+1]=x;
    return x;
}


bool isempty()
{
    if(top==-1)
    {
        return true;
    }
    return false;
}


bool isfull()
{
    if(top>=n-1)
    {
        return true;
    }
    return false;
}

void display()
{
    if(top==-1)
    {
        cout<<"Stack underflow\n";
    }
    for(int i=top;i>=0;i--)
    {
        cout<<s[i]<<endl;
    }
}
};

int main()
{
    Stack s1;
    int s,val,i,x;


    do
    {
        cout<<"enter 1 for Push\n";
        cout<<"enter 2 for Pop\n";
        cout<<"enter 3 for Peek\n";
        cout<<"enter 4 for Peep\n";
        cout<<"enter 5 for change\n";
        cout<<"enter 6 for isempty \n";
        cout<<"enter 7 for isfull \n";
        cout<<"enter 8 for display\n";
        cout<<"enter 9 for Exit\n";
        cout<<"enter your choice : ";
        cin>>s;

        switch(s)
        {
         case 1:

                cout<<"enter element to insert : ";
                cin>>val;
               s1.push(val);
                break;
         case 2:
            cout<<"Popped element -->"<<s1.pop()<<"\n";
            break;
         case 3:
            cout<<"Top element Peeked -->"<<s1.peek()<<"\n";
            break;
            case 4:
              cout<<"enter the position : ";
              cin>>i;
              cout<<"The Pepped element from "<<i<<"th position from top is "<<s1.peep(i)<<"\n";
              break;
            case 5:
                cout<<"enter the position : ";
              cin>>i;
              cout<<"enter the new element to change : ";
              cin>>x;
              s1.change(i,x);
              break;
              case 6:
                if(s1.isempty())
                    cout<<"stack is empty\n";

                else
                    cout<<"stack is not empty\n";
                break;
              case 7:
                if(s1.isfull())
                    cout<<"stack is full\n";
                else
                    cout<<"stack is not full\n";
                break;
                case 8:
                s1.display();
                break;
              case 9:
                  break;
              default:
                    cout<<"Invalid Input\n";
                    break;


        }

    }while(s!=9);
s1.display();

}
