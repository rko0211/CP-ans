#include<bits/stdc++.h>
using namespace std;
int main()
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

    int sum =0;
    for(int i=1;i<n;i++)
    {
        a[i] = a[i]^a[i-1];
        a[i-1]=0;
    }
    int count=n;
    for(int i=0;i<n;i++)
    {
        if(a[i]) count--;
    }
    if(count==n) cout<<"YES"<<endl;
    else if(count==n-1)
    {
        if((n-1)%2==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
}

    return 0;
}