#include<iostream>
#include <vector>
using namespace std;
void pairsum(int a[],int n,int s)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((a[i]+a[j])==s)
            {
                cout<<a[i]<<" "<<a[j]<<endl;
            }
        }
    }
    // For sorted
    // int i=0,j=n-1;
    // while(i<j)
    // {
    //     if((a[i]+a[j])==s)
    //     {
    //             cout<<a[i]<<" "<<a[j]<<endl;
    //             i++;
    //     }
    //     else if ((a[i]+a[j])>s)
    //     {
    //         j--;
    //     }
    //     else
    //     {
    //         i++;
    //     }
    // }
}
int main()
{
    int n,num[100],s;
    cout<<"Enter the size of array: ";
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>num[i];
    cout<<"Enter the Sum required: ";
    cin>>s;
    cout<<"Pair Sum numbers are: "<<endl;
    pairsum(num,n,s);
    return 0;
}