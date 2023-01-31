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
    int b[n];
    for(int i=0;i<n;i++)
    cin>>b[i];

    int zero_count=0;
    for(int i=0;i<n;i++)
    {
        if(b[i]==0)
        zero_count++;
    }
    if(zero_count%2==0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;

}

    return 0;
}