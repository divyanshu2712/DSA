#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<j<<" ";
        }
        for(int j=1;j<=2*i-2;j++)
        {
            cout<<"* ";
        }    
        for(int j=n-i+1;j>=1;j--)
            cout<<j<<" ";
        cout<<endl;
    }
    return 0;
}