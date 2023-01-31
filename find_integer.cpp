#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        ll n = (x * 1LL * y) - x - y;
        if (n == -1)
            n = max(x, y) - 1;
        if (n == -1)
            n = 5;
        else if (n == 0)
            n = 2;

        cout << n << endl;
    }

    return 0;
}
