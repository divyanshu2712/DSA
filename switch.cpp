#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter num 1: ";
    cin>>a;
    cout<<"Enter num 2: ";
    cin>>b;
    char op;
    cout<<"Enter operation: ";
    cin>>op;
    switch (op)
    {
    case '+':
        cout<<"Addition is: "<<a+b;
        break;

    case '-':
        cout<<"Subtraction is: "<<a-b;
        break;
    
    case '*':
        cout<<"Multiplication is: "<<a*b;
        break;
    
    case '/':
        cout<<"Division is: "<<a/b;
        break;
    
    default:
        break;
    }
    return 0;
}