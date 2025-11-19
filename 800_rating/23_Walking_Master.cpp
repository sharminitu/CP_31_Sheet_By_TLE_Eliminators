#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, c = 0;
    cin >> t;
    while (t--)
    {
        int a, b, x, y;
        cin >> a >> b >> x >> y;

        if (y < b)
        {
            cout << -1 << endl;
            continue;
        }

        int moves = y - b;

        a += moves;

        if (a < x)
        {
            cout << -1 << endl;
            continue;
        }

        moves += (a - x);

        cout << moves << endl;
    }

    return 0;
}