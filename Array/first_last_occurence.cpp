#include<iostream>
using namespace std;
void first_occurence(int a[],int n,int k)
{
    int low=0,high=n-1,ans;
    while(low<=high)
    {
        int mid=low+((high-low)/2);
        if(a[mid]==k)
        {
            ans=mid;
            high=mid-1;
        }
        else if(a[mid]>k)
            high=mid-1;
        else
            low=mid+1;
    }
    cout<<"First Occurence: "<<ans<<endl;
}
void last_occurence(int a[],int n,int k)
{
    int low=0,high=n-1,ans;
    while(low<=high)
    {
        int mid=low+((high-low)/2);
        if(a[mid]==k)
        {
            ans=mid;
            low=mid+1;
        }
        else if(a[mid]>k)
            high=mid-1;
        else
            low=mid+1;
    }
    cout<<"Last Occurence: "<<ans<<endl;
}

int main()
{
    int a[100],n;
    cout<<"Enter size of Array: ";
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter key to search: ";
    int k;
    cin>>k;

    first_occurence(a,n,k);
    last_occurence(a,n,k);
    return 0;
}