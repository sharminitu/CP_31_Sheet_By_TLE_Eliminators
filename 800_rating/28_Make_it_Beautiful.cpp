#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> a(n);
        long long total_count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        int mx = a[n - 1];
        int mn = a[0];

        if (mx == mn)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << mx << " ";
            for (int i = 0; i < n - 1; i++)
            {

                cout << a[i] << " ";
            }
        }
    }
    return 0;
}