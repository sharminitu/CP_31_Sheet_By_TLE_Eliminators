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
        long long a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long c = 0;
        long long max_len = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                c++;
            }
            else
            {
                c = 0;
            }
            max_len = max(max_len, c);
        }
        cout << max_len << endl;
    }

    return 0;
}