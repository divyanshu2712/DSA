#include<iostream>
using namespace std;
int main()
{
    int n,num[100],sum=0;
    cout<<"Enter the size of array: ";
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>num[i];
    for(int i=0;i<n;i++)
    {
        sum+=num[i];
    }
    cout<<"Sum of numbers is: "<<sum;
    return 0;
}