#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
#define ll long long int
int main() {
	// Your code here
 ll a[3];
for(int i=0;i<3;i++)
cin>>a[i];
if(((a[0]+a[1])%2==0 && (a[0]+a[1])>0) || ((a[0]+a[2])%2==0 &&(a[0]+a[1])>0) || ((a[1]+a[2])%2==0&&(a[1]+a[2])>0))
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;


    return 0;
}