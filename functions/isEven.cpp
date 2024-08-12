#include<iostream>
using namespace std;

bool check(int a)
{
    return (a%2==0);
}
int main()
{
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"Is Number Even: "<<check(a);

    return 0;
}