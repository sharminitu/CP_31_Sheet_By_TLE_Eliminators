#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, c, d, e;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        if (a % b != 0)
        {
            cout << 1 << endl;
            cout << a << endl;
        }
        else
        {

            cout << 2 << endl;
            cout << 1 << " " << (a - 1) << endl;
        }
    }
    return 0;
}