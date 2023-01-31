#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        unordered_set<int> s;
        for (int i = 0; i < n; i++)
        {
            s.insert(a[i]);
        }
        if (s.size() == 1)
            cout << "NO" << endl;
        else
        {
            swap(a[1], a[n - 1]);
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
                cout << a[i] << " ";
            cout << endl;
        }
    }

    return 0;
}