// codeforces.com/problemset/problem/1807/D
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, q;
        cin >> n >> q;

        vector<long long> a(n + 1);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long old_sum = 0;
        for (int i = 0; i < n; i++)
        {
            old_sum += a[i];
        }

        vector<long long> prefixSum(n + 1, 0);

        for (int i = 1; i <= n; i++)
        {
            prefixSum[i] = prefixSum[i - 1] + a[i - 1];
        }
        while (q--)
        {
            long long l, r, k;
            cin >> l >> r >> k;

            long long sum_to_remove = prefixSum[r] - prefixSum[l - 1];

            long long sum_to_add = (r - l + 1) * k;

            long long total_sum = (old_sum - sum_to_remove + sum_to_add);

            if (total_sum % 2 == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}