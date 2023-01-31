#include<bits/stdc++.h>
using namespace std;\
void solve()
{
    int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
int no_odd=0;
int no_even=0;
for(int i=0;i<n;i++)
{
  if(a[i]%2==0)
  no_even++;
  else no_odd++;
}
int ans[3];
if(no_even>=no_odd && no_odd!=0)
{
    cout<<"YES"<<endl;
    int j=0;
    for(int i=0;i<n;i++)
    {
       if(a[i]%2==1)
       {
        ans[j]=i+1;
        j++;
        break;
       }
    }
    for(int i=0;i<n;i++)
    {
       if(a[i]%2==0 && j<3)
       {
        ans[j]=i+1;
        j++;
        
       }
    }
    for(int i=0;i<3;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return ;
}

else if((no_odd>no_even) && (no_odd>=3))
{
    cout<<"YES"<<endl;
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==1 && j<3)
        {
            ans[j]=i+1;
            j++;
        }
    }
    for(int i=0;i<3;i++)
    cout<<ans[i]<<" ";
    cout<<endl;
    return ;
}
else if((no_odd>no_even) && (no_odd<3))
{cout<<"NO"<<endl;
return;
}
else if(no_odd==0)
{
    cout<<"NO"<<endl;
    return ;
}


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