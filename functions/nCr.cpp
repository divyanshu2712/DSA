#include<iostream>
using namespace std;

int fac(int n)
{
    if (n<=0)
        return 1;
    return (n*fac(n-1));
}

float nCr(int n,int r)
{
    float ans;
    int num,deno;
    num=fac(n);
    deno=fac(r)*fac(n-r);
    ans=num/deno;
    return ans;
}

int main()
{
    int n,r;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Enter a number: ";
    cin>>r;
    cout<<"Answer is: "<<nCr(n,r);

    return 0;
}