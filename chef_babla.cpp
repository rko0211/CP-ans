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
for(int i=0;i<n;i++)
{
    if(a[i]<0)
    a[i]=-1*a[i];
}
sort(a,a+n);
int ans = a[0]-1;

cout<<ans<<endl;
}



    return 0;
}