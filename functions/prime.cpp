#include<iostream>
#include<math.h>
using namespace std;

bool isprime(int a)
{
    for(int i=2;i<=(sqrt(a));i++)
    {
        if(a%i==0)
            return false;
    }
    return true;
}
int main()
{
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"Is Number Prime: "<<isprime(a);

    return 0;
}