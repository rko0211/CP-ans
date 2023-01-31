#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

    int n, q;
    cin >> n >> q;
    ll a[n];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    ll sum = 0;
    for (int i = 1; i <= n; i++)
        sum += a[i];

    map<int, ll> m;
    for (int i = 1; i <= n; i++)
    {
        m[i] = a[i];
    }
    ll def;

    while (q--)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            int i;cin>>i;
            ll x; cin>>x;
      
            if (!m[i])
                m[i] = def;

            sum -= m[i];
            sum += x;
            m[i] = x;
        }
        else
        {
            ll x;
            cin >> x;

            m.clear();
            sum = (n * x);
            def = x;
        }

        cout << sum << endl;
    }

    return 0;
}





