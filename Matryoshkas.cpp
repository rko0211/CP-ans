#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool cmp(pair<ll,ll>&p1,pair<ll,ll>&p2)
{
   return p2.second>p1.second;
}
void solve()
{
    int n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    reverse(a,a+n);
 vector<pair<ll,ll>>v;
 for(int i=0;i<n;)
 {
    
  int j =i;
  while(i<n && a[i]==a[j])
  {
    i++;
  }
  v.push_back({a[j],(i-j)});

 }
 
 int m = v.size();
 ll ans =v[0].second;
 for(int i=1;i<m;i++)
 {
    if(v[i].first+1==v[i-1].first)
    {
        ans+=max(v[i].second-v[i-1].second,0ll);

    }
    else
    {
        ans+=v[i].second;
    }
 }
 cout<<ans<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}