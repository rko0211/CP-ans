#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    bool b[n]={false};
    for(int i=0;i<n;i++)
    {
        if(i>=a[i])
        {
            b[i]=true;
        }
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(b[i]==true)
        {
            if(i==0)
            ans++;
            else if(b[i-1]==false)
            ans++;
        }
    }
    if(a[0]>0) ans++;
    cout<<ans<<endl;
}
int main()
{

int t;
cin>>t;
while(t--)
solve();
    return 0;
}