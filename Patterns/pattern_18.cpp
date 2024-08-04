#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    char c='A';
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<char(c+(n-i+j)-1)<<" ";
        }    
        cout<<endl;
    }
    return 0;
}