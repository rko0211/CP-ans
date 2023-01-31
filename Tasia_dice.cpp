#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, s, r;
    cin >> n >> s >> r;
    int ans[n];
    ans[0] = (s - r);
    if (r % (n - 1) == 0)
    {
        for (int i = 1; i < n; i++)
        {
            ans[i] = r / (n - 1);
        }
    }
    else
    {
        int rem = r%(n-1);
        int av = r/(n-1) ;
        for(int i=1;i<n;i++)
        {
            if(rem>0)
            {
                ans[i]=av+1;
                rem--;
            }
            else
            ans[i]=av;

        }
    }
    for(int i=0;i<n;i++)
    cout<<ans[i]<<" ";
    cout<<endl;
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
