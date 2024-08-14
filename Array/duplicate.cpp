#include<iostream>
using namespace std;
int duplicate(int a[],int n)
{
    int ans=0;
    for(int i=0;i<n;i++)
        ans=ans^a[i];
    for(int i=1;i<n;i++)
        ans=ans^i;
    return ans;
}
int main()
{
    int n,num[100],sum=0;
    cout<<"Enter the size of array: ";
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>num[i];
    int u;
    u=duplicate(num,n);

    cout<<"Duplicate element is: "<<u<<endl;
    return 0;
}