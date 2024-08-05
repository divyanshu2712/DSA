#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of terms you want: ";
    cin>>n;
    int c=0;
    // Loop till n=0
    while(n)
    {
        // Check last bit
        cout<<(n);
        if(n&1)
            c++;
        // Shift 1 bit right
        n=n>>1;
    }
    cout<<"Number of 1's in its binary representation are: "<<c;
    return 0;
}