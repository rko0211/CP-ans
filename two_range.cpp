#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int a,b,c,d;
       cin>>a>>b>>c>>d;
       if((a<c && b>d) || (a>c && d>b))
       {
        cout<<max(a,max(b,max(c,d)))-min(a,min(b,min(c,d)))+1<<endl;
       }
       else if(b<c)
       {
        cout<<(b-a+1)+(d-c+1)<<endl;
       }
       

    }
}