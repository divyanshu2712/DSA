#include<iostream>
using namespace std;

int set(int a,int b)
{
    int c=0;
    while(a || b)
    {
        if (a&1)
            c++;
        if (b&1)
            c++;
        a=a>>1;
        b=b>>1;
    }
    return c;
}
int main()
{
    int a,b;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"Enter a number: ";
    cin>>b;
    cout<<"Number of set bits are: "<<set(a,b);

    return 0;
}