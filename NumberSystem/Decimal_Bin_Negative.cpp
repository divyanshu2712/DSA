#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int n;
    cout<<"Enter a number: ";
    cin>>n;
    long long int ans=0,i=0;
    if (n<0)
        n=pow(2,16)+n;
    while(n)
    {
        int bit=n&1;
        ans=(pow(10,i)*bit)+ans;
        n=n>>1;
        i++;
    }
    cout<<"Binary of the number is: "<<ans;
    return 0;
}