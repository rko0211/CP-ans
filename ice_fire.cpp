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
        string s;
        cin>>s;
        int ans[n-1];
        ans[0]=1;
        for(int i=1;i<n-1;i++)
        {
            if(s[i]==s[i-1])
            {
              ans[i]=ans[i-1];
            }
            else
            {
            ans[i]=i+1;
            }
        }
        for(int i=0;i<n-1;i++)
        cout<<ans[i]<<" ";
        cout<<endl;
    }


    return 0;
}