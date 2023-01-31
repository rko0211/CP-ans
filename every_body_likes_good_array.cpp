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
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];

int count=0;
    for(int i=1;i<n;i++)
    {
      if((a[i]%2==0 && a[i-1]%2==0)||(a[i]%2==1 && a[i-1]%2==1))
      count++;
    }
    cout<<count<<endl;
}

    return 0;
}