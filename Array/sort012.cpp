#include<iostream>
using namespace std;
void sort012(int *a,int n)
{
    int l=-1,m=0,h=n-1;
    while(m<=h)
    {
        if(a[m]==0)
            swap(a[++l],a[m++]);
        else if(a[m]==1)
            m++;
        else
            swap(a[h--],a[m]);
    }
}
int main()
{
    int n,num[100];
    cout<<"Enter the size of array: ";
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>num[i];
    
    sort012(num,n);

    cout<<"Sorted array"<<endl;
    for(int i=0;i<n;i++)
        cout<<num[i]<<" ";
    return 0;
}