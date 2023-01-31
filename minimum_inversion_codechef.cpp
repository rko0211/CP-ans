#include<bits/stdc++.h>
using namespace std;
#define ll long long 
signed main()
{
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    map<int,int>mp1;
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp1[a[i]]++;
    }
    vector<int>v(n+1,0);
    for(int i=n-1;i>=0;i--)
    {
        v[i]=v[i+1];
        v[i]=v[i]+mp1[a[i]+1];
        v[i]=v[i]-mp[a[i]-1];
        mp1[a[i]]--;
        mp[a[i]]++;
    }
    int ans =0;
    for(int i=0;i<n;i++)
    {
        ans= max(ans,v[i]);
    }
    cout<<ans<<endl;
}

    return 0;
}