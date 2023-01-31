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
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    if(sum>0)
    cout<<sum<<endl;
    else cout<<-(sum)<<endl;
}

    return 0;
}