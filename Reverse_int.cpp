#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    bool flag=0;
    cout<<"Enter a number: ";
    cin>>n;
    if (n<0)
    {
        n=n*-1;
        flag=true;
    }
    int ans=0;
    while(n)
    {
        int rem=n%10;
        if((ans<INT_MIN/10) || ans>INT_MAX/10)
            {ans=0;break;}
        ans=(ans*10)+rem;
        n/=10;
    }
    if (flag)
        ans=ans*-1;
    cout<<"Reverse Integer is: "<<ans;
    return 0;
}