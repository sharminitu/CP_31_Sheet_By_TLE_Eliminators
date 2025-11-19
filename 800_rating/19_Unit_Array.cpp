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
        int a[n];
        int c = 0;

        long long positive_cnt = 0, Negtive_cnt = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                positive_cnt++;
            }
            else
            {
                Negtive_cnt++;
            }
        }

        long long operation = 0;

        while (positive_cnt < Negtive_cnt || Negtive_cnt % 2 == 1)
        {
            operation++;
            positive_cnt++;
            Negtive_cnt--;
        }
        cout << operation << endl;
    }
    return 0;
}