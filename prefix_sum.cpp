#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int s[k];
        for (int i = 0; i < k; i++)
        {
            cin >> s[i];
        }
        int a[k];
        if (s[0] > 0)
        {
            a[0] = s[0] / (n - k + 1);
            if (s[0] % (n - k + 1) != 0)
            {
                a[0]++;
            }
        }
        else
        {
            a[0] = s[0] / (n - k + 1);
        }
        for (int i = 1; i < k; i++)
        {
            a[i] = (s[i] - s[i - 1]);
        }
        bool flag = false;
        for (int i = 1; i < k; i++)
        {
            if (a[i - 1] > a[i])
            {
                flag = true;
                break;
            }
        }

        if (flag == true)
        {
            cout << "No" << endl;
        }
        else
            cout << "Yes" << endl;
    }

    return 0;
}