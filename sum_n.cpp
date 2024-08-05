#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter a number: ";
    int n,s=0;
    cin>>n;
    // for(int i=1;i<=n;i++)
    //     s=s+i;
    cout<<"Sum of n number is: "<<int((n*(n+1))/2);
    return 0;
}