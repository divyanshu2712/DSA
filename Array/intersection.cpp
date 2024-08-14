#include<iostream>
#include <vector>
using namespace std;
vector<int> intersect(int a[],int b[],int n,int m)
{
    vector<int> ans;
    int i=0,j=0;
    while(i<n && j<m)
    {
        if(a[i]==b[j])
        {
            ans.push_back(a[i]);
            i++;j++;
        }
        else if(a[i]<b[j])
            i++;
        else
            j++;
    }
    return ans;
}
int main()
{
    int n,num[100],arr[100],m;
    cout<<"Enter the size of array: ";
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>num[i];
    cout<<"Enter the size of array: ";
    cin>>m;
    for(int i=0;i<m;i++)
        cin>>arr[i];
    vector<int> u;
    u=intersect(num,arr,n,m);
    cout<<"Intersection is: ";
    for(int i=0;i<u.size();i++)
        cout<<" "<<u[i]<<" ";
    
    return 0;
}