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
    int h[n];
    for(int i=0;i<n;i++)
    cin>>h[i];

   int no_ones=0;
   for(int i=0;i<n;i++)
   {
    if(h[i]==1)
    no_ones++;
   }
   int ans=0;
   if(no_ones%2==0)
   {
    ans+=no_ones/2;
   }
   else
   {
    ans+=no_ones/2+1;
   }
   ans +=(n-no_ones);
   cout<<ans<<endl;
}
    return 0;
}