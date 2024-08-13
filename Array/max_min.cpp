#include<iostream>
using namespace std;
int main()
{
    int n,num[100],maxi=INT_MIN,mini=INT_MAX;
    cout<<"Enter the size of array: ";
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>num[i];
    for(int i=0;i<n;i++)
    {
        maxi=max(num[i],maxi);
        mini=min(num[i],mini);
    }
    cout<<"Maximum and minimum are: "<<maxi<<" "<<mini;
    return 0;
}