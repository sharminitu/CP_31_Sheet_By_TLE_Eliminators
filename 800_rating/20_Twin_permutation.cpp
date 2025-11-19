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
        int b[n];
        for (int i = 0; i < n; i++)
        {
            b[i] = (n + 1) - a[i];

            cout << b[i] << " ";
        }
        cout << endl;
    }

    return 0;
}