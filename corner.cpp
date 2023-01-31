#include<bits/stdc++.h>
using namespace std;
int main()
{

int t;
cin>>t;
while(t--)
{
    int n,m;
    cin>>n>>m;
 char s[n][m];
 int a[n][m];
 int sum=0;
 for(int i=0;i<n;i++)
 {
    for(int j=0;j<m;j++)
    {
   cin>>s[i][j];
   a[i][j] = s[i][j]-'0';
sum+=a[i][j];
    }
 }
 int mn=INT_MAX;
 for(int i=0;i<n-1;i++)
 {
    for(int j=0;j<m-1;j++)
    {
      int count = (a[i][j]+a[i+1][j]+a[i][j+1]+a[i+1][j+1]);
      if(count==0) continue;
      mn = min(mn,max(1,count-1));
    }
 }
 if(sum==0) cout<<'0'<<endl;
 else
 cout<<(sum+1-mn)<<endl;
}
    return 0;
}