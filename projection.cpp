#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int w,d,h;
    cin>>w>>d>>h;
    int a,b,f,g;
    cin>>a>>b>>f>>g;

   int ans1 = min(abs(b-g)+abs(w-f)+abs(w-a),abs(a-f)+abs(d-b)+abs(d-g));
   int ans2 = min(abs(b-g)+abs(0-f)+abs(0-a),abs(a-f)+abs(0-b)+abs(0-g));
   cout<<min(ans1,ans2)+h<<endl;



}

    return 0;
}