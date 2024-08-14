#include<iostream>
using namespace std;
void swapalternate(int a[],int n)
{
    for(int i=0;i<n;i+=2)
    {
        if((i+1)<n)
        {
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    // int i=0,j=1;
    // while((i<n)&&(j<n))
    // {
    //     int temp=a[i];
    //     a[i]=a[j];
    //     a[j]=temp;
    //     i+=2;j+=2;
    // }
}
int main()
{
    int n,num[100],sum=0;
    cout<<"Enter the size of array: ";
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>num[i];
    
    swapalternate(num,n);

    cout<<"Swaped array"<<endl;
    for(int i=0;i<n;i++)
        cout<<num[i]<<" ";
    return 0;
}