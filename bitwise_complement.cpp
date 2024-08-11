#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int temp=n,mask=0;
    while(temp)
    {
        mask=mask<<1;
        mask=mask|1;
        temp=temp>>1;
    }
    cout<<"Complement is: "<<((~n)&mask);
    return 0;
}