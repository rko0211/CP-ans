#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int m;
        cin >> n >> m;
        vector<int> min(n);
        for (auto &x : min)
            cin >> x;
        int ans = 0;
        auto b = min;

        sort(b.begin(), b.end());
        for (int i = 0; i < n & b[i] <= m; i++)
        {
            m -= b[i];
            ans++;
        }
        if (ans != 0 && ans != n && m + b[ans - 1] >= min[ans]) ++ans;
        cout<<n-ans+1<<endl;
    }

    return 0;
}