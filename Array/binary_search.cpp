#include<iostream>
using namespace std;
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
    int low=0,high=n-1;
    while(low<=high)
    {
        // int mid=(low+high)/2;
        int mid=low+((high-low)/2);
        if(a[mid]==k)
        {
            cout<<"Found at: "<<mid+1;
            break;
        }
        else if(a[mid]>k)
            high=mid-1;
        else
            low=mid+1;
    }



}