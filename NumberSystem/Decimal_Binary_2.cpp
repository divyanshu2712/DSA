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
        int bit=n%2;
        ans=(pow(10,i)*bit)+ans;
        n=n/2;
        i++;
    }
    cout<<"Bi`nary of the number is: "<<ans;
    return 0;
}