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
        long long a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long operation = INT_MAX;

        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] <= a[i + 1])
            {

                long long different = a[i + 1] - a[i];
                long long required_operation = different / 2 + 1;
                operation = min(operation, required_operation);
            }
            else
            {
                operation = 0;
            }
        }
        cout << operation << endl;
    }
    return 0;
}