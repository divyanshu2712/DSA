#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a;
    cin>>b;
    cout<<"a&b: "<<(a&b);
    cout<<endl;
    cout<<"a|b: "<<(a|b);
    cout<<endl;
    cout<<"a^b: "<<(a^b);
    cout<<endl;
    cout<<"~a: "<<(~a)<<endl;
    cout<<"Left shift a by b: "<<(a<<b)<<endl;;
    cout<<"Right shift a by b: "<<(a>>b)<<endl;;

    return 0;
}