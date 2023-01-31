#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
const unsigned int M = 1000000007;

int main()
{
 int t;
 cin>>t;
 while(t--)
 {
    ll n;
    cin>>n;
    ll res = n*(n-1);
    ll i=1;
    while(i!=n+1)
    {
        res = ((res%M)*i)%M;
        i++;
    }
    cout<<res<<endl;
 }


    return 0;
}