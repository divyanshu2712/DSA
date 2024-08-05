#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of terms you want: ";
    cin>>n;
    int a=0,b=1,c;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=(n-2);i++)
    {
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    return 0;
}