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

        vector<int> v;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n);
        int max_len = 1, c = 1;
        for (int i = 1; i < n; i++)
        {
            if ((a[i] - a[i - 1]) <= k)
            {
                ++c;
            }
            else
            {
                c = 1;
            }

            max_len = max(max_len, c);
        }

        cout << n - max_len << endl;
    }

    return 0;
}