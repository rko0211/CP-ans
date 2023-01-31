#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int count = 0;
    string ans ="314159265358979323846264338327";
    for (int i = 0; i < s.size(); i++)
    {
       if(s[i]==ans[i])
       count++;
       else break;
    }
    cout<<count<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
