#include<iostream>
using namespace std;
int main()
{

int t;
cin>>t;
while(t--)
{
    int x;
    cin>>x;
    string s= to_string(x);
    bool flag =false;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]-'0'==7)
       {
        flag =true;
        break;
       }
    }
    if(flag)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}

    return 0;
}