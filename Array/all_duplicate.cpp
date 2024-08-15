#include <bits/stdc++.h>
using namespace std;
vector<int> dup(int a[],int n)
{
    vector<int> ans;
    unordered_map<int,int> f;
    for(int i=0;i<n;i++)
        f[a[i]]++;
    for(auto i:f)
        if(i.second==2)
            ans.push_back(i.first);   
    return ans;
}
int main()
{
    int n,num[100],sum=0;
    cout<<"Enter the size of array: ";
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>num[i];
    vector<int> u;
    u=dup(num,n);
    for(auto i:u)
        cout<<i<<" ";
    return 0;
}