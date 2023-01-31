#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{

int t;
cin>>t;
while(t--)
{
    int a,b;
    cin>>a>>b;
    int gcdval = __gcd(a,b);
    cout<<lcm(a,gcdval)-__gcd(b,gcdval<<endl;
}
    return 0;
}