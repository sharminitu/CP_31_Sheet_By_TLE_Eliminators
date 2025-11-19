#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    bool f = 0;

    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;
        int s = 0, c = 0;

        if (x != 1)
        {
            cout << "Yes" << endl;
            cout << n << endl;
            for (int i = 0; i < n; i++)
            {
                cout << 1 << " ";
            }
            cout << endl;
        }
        else
        {
            if (k == 1 || n % 2 == 1 && k == 2)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
                if (n % 2 == 0)
                {
                    cout << n / 2 << endl;
                    for (int i = 0; i < n / 2; i++)
                    {
                        cout << 2 << " ";
                    }
                    cout << endl;
                }
                else
                {
                    cout << (n - 3) / 2 + 1 << endl;
                    for (int i = 0; i < (n - 3) / 2; i++)
                    {
                        cout << 2 << " ";
                    }
                    cout << 3 << endl;
                }
            }
        }
    }
    return 0;
}