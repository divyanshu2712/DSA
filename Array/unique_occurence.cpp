#include <bits/stdc++.h>
using namespace std;
bool unique(int a[],int n)
{
    unordered_map<int,int> f;
    for(int i=0;i<n;i++)
        f[a[i]]++;
    unordered_set<int> s;
    for(auto i:f)
        s.insert(i.second);
    return f.size()==s.size();
    // int arr[2001]={0},mini=INT_MAX,maxi=INT_MIN;
    // for(int i=0;i<n;i++)
    // {
    //     arr[a[i]+1000]++;
    //     mini=min(mini,a[i]);
    //     maxi=max(maxi,a[i]);
    // }
    // sort(arr+mini+1000,arr+1000+maxi+1);
    // for(int i=(mini+1000);i<(maxi+1000);i++)
    // {
    //     if(arr[i]==0)
    //         continue;
    //     if(arr[i]==arr[i+1])
    //         return false;
    // }
    // return true;
}
int main()
{
    int n,num[100],sum=0;
    cout<<"Enter the size of array: ";
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>num[i];
    int u;
    u=unique(num,n);
    if (u)
        cout<<"Yes have Unique Occurence ";
    else
        cout<<"Not have Unique Occurence ";
    return 0;
}