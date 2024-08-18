#include<iostream>
using namespace std;

int pivot(int a[],int n)
{
    int s=0,mid,e=n-1;
    while(s<e)
    {
        mid=s+(e-s)/2;
        if(a[mid]>=a[0])
            s=mid+1;
        else
            e=mid;
    }
    return s;
}

int binary_search(int a[],int s,int e,int t)
{
    int mid;
    while(s<=e)
    {
        mid=s+(e-s)/2;
        if (a[mid]==t)
            return mid;
        else if(a[mid]<t)
            s=mid+1;
        else
            e=mid-1;
    }
    return -1;
}
int main()
{
    int a[100],n;
    cout<<"Enter size of Array: ";
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int t;
    cout<<"Enter the target: ";
    cin>>t;
    int ans,pi=pivot(a,n);
    if((a[pi]<=t)&&(a[n-1]>=t))
        ans=binary_search(a,pi,n-1,t);
    else
        ans=binary_search(a,0,pi-1,t);
    if (ans==-1)
        cout<<"Not found";
    else
        cout<<"Found at: "<<ans;
    return 0;
}
