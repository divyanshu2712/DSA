#include<iostream>
using namespace std;
int main()
{
    int n,num[100],sum=0;
    cout<<"Enter the size of array: ";
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>num[i];
    int i=0,j=n-1;
    while(i<=j)
    {
        int temp=num[i];
        num[i]=num[j];
        num[j]=temp;
        i++;j--;
    }
    cout<<"Printing Reversed array"<<endl;
    for(int i=0;i<n;i++)
        cout<<num[i]<<" ";
    return 0;
}