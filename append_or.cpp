#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,y;
	    cin>>n>>y;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    int xor_sum=0;
	    for(int i=0;i<n;i++)
	    {
	        xor_sum|=a[i];
	    }
	    int x = (y-xor_sum);
	    if((xor_sum|x)==y)
	    cout<<x<<endl;
	    else
	    cout<<-1<<endl;
	}
	return 0;
}
