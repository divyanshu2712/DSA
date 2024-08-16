#include<iostream>
#include <vector>
using namespace std;
void pairsum(int a[],int n,int t)
{    
    for(int k=0;k<n-2;k++)
    {
    int i=k+1,j=n-1,s=t-a[k];
    while(i<j)
    {
        if((a[i]+a[j])==s)
        {
                cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
                i++;
        }
        else if ((a[i]+a[j])>s)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    }
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