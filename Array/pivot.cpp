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
int main()
{
    int a[100],n;
    cout<<"Enter size of Array: ";
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int low=0,high=n-1;
    int peak=pivot(a,n);
    cout<<"Pivot is at Index : "<<peak<<endl;
    cout<<"Value of pivot is: "<<a[peak];

    return 0;
}