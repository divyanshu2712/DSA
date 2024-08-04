#include<iostream>
using namespace std;
int fac(int n)
{
    if(n<=0)
        return 1;
    else
        return n*fac(n-1);
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
            cout<<" ";
        for(int j=1;j<=i;j++)
            cout<<(fac((i-1))/(fac((j-1))*fac((i-j))))<<" ";
        for(int j=1;j<=n-i;j++)
            cout<<" ";
        cout<<endl;
    }
    return 0;
}