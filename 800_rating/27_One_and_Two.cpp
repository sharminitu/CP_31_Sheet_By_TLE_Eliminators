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
            if (a[i] == 2)
            {
                total_count++;
            }
        }

        long long ans = -1;
        if (total_count % 2 != 0)
        {
            cout << ans << endl;
            continue;
        }

        long long current_count_two = 0;
        long long half = total_count / 2;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 2)
            {
                current_count_two++;
            }

            if (current_count_two == half)
            {
                ans = i + 1;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}