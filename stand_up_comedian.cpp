#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
 int t;
 cin>>t;
 while(t--)
{
ll a[4];
for(int i=0;i<4;i++)
cin>>a[i];
ll totaljoke=0;
ll bobmood=0;
ll alicemood =0;
while(a[1]>0||a[2]>0||a[3]>0)
{
    if(bobmood>0 && a[1]>0)
    {
        int temp = min(bobmood,a[1]);
        bobmood-=temp;
        alicemood+=temp;
        totaljoke+=temp;
        a[1]-=temp;
    }
    else if(alicemood>0 && a[2]>0)
    {
        int temp = min(alicemood,a[2]);
        alicemood-=temp;
        bobmood+=temp;
        totaljoke+=temp;
        a[2]-=temp;
    }
    else if()

}

}
    return 0;
}