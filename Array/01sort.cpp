#include<iostream>
using namespace std;
void sort01(int a[],int n)
{
    int i=0,j=n-1;
    while(i<j)
    {
        while(a[i]==0)
            i++;
        while(a[j]==1)
            j--;
        
        if((i<j))
        {
            swap(a[i],a[j]);
        }
        // if(a[i]==0)
        //     i++;
        // if(a[j]==1)
        //     j--;
        // if((i<j)&&(a[i]==1)&&(a[j]==0))
        // {
        //     swap(a[i],a[j]);
        // }
    }
}
int main()
{
    int n,num[100];
    cout<<"Enter the size of array: ";
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>num[i];
    
    sort01(num,n);

    cout<<"Sorted array"<<endl;
    for(int i=0;i<n;i++)
        cout<<num[i]<<" ";
    return 0;
}