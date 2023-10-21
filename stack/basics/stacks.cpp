#include<iostream>
#define n 5
using namespace std;

int stack[n];
int top=-1;
int i;

void push()
{
    if(top==n-1)
    {
        cout << "stack overflow"<<endl;
    }
    else
    {  
        cout << "enter the elemnt to push"<<endl;
        cin >> stack[i];
        top++;
        stack[top]=stack[i];
       cout <<"the elment iserted is  "<<stack[i]<<endl; 
    }
}
void pop()
{
    if(top==-1)
    {
        cout << "stack is underflow"<<endl;
    } 
    else
    {
        cout << "the pooped element is   "<<stack[top]<<endl;
        top--;
    }
}
void peek()
{
    if(top==-1)
    {
         cout <<"no element to peek"<<endl;
    }
    else
    {
        cout << "the topmost elemnt is  "<<stack[top]<<endl;
    }
}

void display()
{
    if(top==-1)
    {
        cout << "stack is empty"<<endl;
    }
    else{
    cout << "stack elements are  "<<endl;
    for(i=top;i>=0;i--)
    {
        cout << stack[i]<<" "<<endl;
    }
}
}

int main()
{
    int ch;
    cout  <<"1 for pushing elemnts"<<endl;
    cout <<"2 for popping out elements"<<endl;
    cout <<"3 for peeking "<<endl;
    cout <<"4 for displaying  the elemnts "<<endl;
    cout <<"5 for exit"<<endl;

    do{
        cout << "enter the choice"<<endl;
        cin >> ch;
        switch(ch)
        {
            case 1:
            push();
            break;

            case 2:
            pop();
            break;

            case 3:
            peek();
            break;

            case 4:
            display();
            break;

            case 5:
            cout << "exit"<<endl;
        }
    }while(ch!=5);
        

    return 0;
}
