#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll a[m];
        for (int i = 0; i < m; i++)
            cin >> a[i];
        sort(a, a + m);
        vector<ll> gapes;
        if (m == 1)
            gapes.push_back(n - 1);

        else
        {
            gapes.push_back((a[0] - 1) + (n - a[m - 1]));
            for (int i = 1; i < m; i++)
            {
                gapes.push_back((a[i] - a[i - 1] - 1));
            }
        }

        sort(gapes.begin(), gapes.end(), greater<ll>());
        int s = 0;
        int sp = 0;
        for (int i = 0; i < gapes.size(); i++)
        {
            int take = gapes[i] - sp;
            if (take < 1)
                break;
            else if (take == 1)
            {
                s++;
                sp += 2;
            }
            else if (take > 1)
            {
                s++;
                sp += 2;
                take -= 2;
                if (take == 1)
                {
                    s++;
                    sp += 2;
                }
                else if (take > 1)
                {
                    s += take;
                    sp += 2;
                }
            }
        }
        cout << (n - s) << endl;
    }

    return 0;
}