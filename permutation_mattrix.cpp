#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;
    cin>>n;
    vector<vector<ll>>v(n,vector<ll>(n-1));
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n-1;j++)
        cin>>v[i][j];
    }
    ll x=-2,y=-2;
    
    for(ll i=0;i<n;i++)
    {
         ll f=0;
        for(int j=0;j<n;j++)
        {
          if(i==j) continue;
          if(v[i][1]==v[j][0])
          {
            x=i;
            y=j;
            f++;
            break;
          }
        }
        if(f==1)
        break;
    }
    cout<<v[x][0]<<" ";
    for(ll i=0;i<n-1;i++) cout<<v[y][i]<<" ";
    cout<<endl;


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