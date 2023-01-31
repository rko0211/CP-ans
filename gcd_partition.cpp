#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    
    vector<ll>pref(n),rev(n);
    pref[0]=a[0];
    for(int i=1;i<n;i++)
    {
        pref[i]=pref[i-1]+a[i];
    }
    rev[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--)
    {
        rev[i] = rev[i+1]+a[i];
    }
    ll ans=0;
    for(int i=0;i<n-1;i++)
    {
        ans = max(ans,__gcd(pref[i],rev[i+1]));
    }
    cout<<ans<<endl;
}
    return 0;
}