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
        int res = 0;

        for (int i = 0; i < n; i++)
        {
            res ^= a[i];
        }
        if (n & 1)
        {
            cout << res << endl;
        }

        else if (res == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}