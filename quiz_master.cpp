#include<bits/stdc++.h>
using namespace std;
#define ll long long int
# define N (int)1e6+3
vector<int>divisors[N];
int main()
{
    for(int i=1;i<=100000;i++)
    {
        for(int j=1;j*j<=i;j++)
        {
            if(i%j==0)
            {
                divisors[i].push_back(j);
            
            if(j*j!=i) divisors[i].push_back(i/j);
            }
        }
    }


 int t;
 cin>>t;
 while(t--)
{
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];

    sort(a,a+n);
    vector<int>count(m+1,0);
    int covered =0;
    int ans=INT_MAX;
    int l=0;int r=-1;
    while(r<n)
    {
       if(covered>=m)
       {
        ans = min(ans,a[r]-a[l]);
        for(auto it:divisors[a[l]])
        {
            if(it>m) continue; //We are not interested to take divisor value greater than m
            if(count[it]==1)
            covered--;
            count[it]--;
        }
        l++;
       } 
       else
       {
        r++;
        if(r==n) break;
        for(auto it:divisors[a[r]])
        {
            if(it>m) continue;
            if(count[it]==0)
            covered++;

            count[it]++;
        }
       }

    }
    if(ans==INT_MAX) ans=-1;
     cout<<ans<<endl;
}

    return 0;
}