#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int p=1,s=0;
    // Product
    while(n)
    {
        int r=n%10;
        p=p*r;
        s=s+r;
        n/=10;
    }
    cout<<"Answer is: "<<(p-s);
    return 0;
}