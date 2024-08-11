#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    bool flag=false;
    int ans=1;
    for(int i=0;i<=30;i++)
    {
        if(ans==n)
        {
            flag=true;
            break;
        }
        if (ans<INT_MAX/2)
            ans*=2;
    }
    if (flag)
        cout<<"Yes";
    else    
        cout<<"No";
    return 0;
}