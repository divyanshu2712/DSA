#include<iostream>
using namespace std;
int nearest_sqrt(int n)
{
    int mid,s=0,e=n,ans=-1;
    while(s<=e)
    {
        mid=(s+e)/2;
        if((mid*mid)==n)
        {
            return mid;
        }
        else if((mid*mid)>n)
            e=mid-1;
        else
        {
            s=mid+1;
            ans=mid;
        }
    }
    return ans;
}

double precise_sqrt(int n,int pre,int sol)
{
    double f=1;
    double ans=sol;
    for(int i=0;i<pre;i++)
    {
        f=f/10;
        for(double j=ans;j*j<n;j=j+f)
            {
                ans=j;
            }
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int mid,s=0,e=n;
    cout<<"Answer is: "<< precise_sqrt(n,3,nearest_sqrt(n));
    return 0;
}