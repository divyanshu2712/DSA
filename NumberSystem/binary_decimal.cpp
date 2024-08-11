#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int ans=0,i=0;
    while(n)
    {
        int bit=n%10;
        ans=(pow(2,i)*bit)+ans;
        n=n/10;
        i++;
    }
    cout<<"Decimal of the number is: "<<ans;
    return 0;
}