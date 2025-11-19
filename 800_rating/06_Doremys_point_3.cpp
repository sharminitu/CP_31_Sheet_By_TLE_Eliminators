// https: // codeforces.com/problemset/problem/1890/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a;
        cin >> a;

        vector<int> arr(a);
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());
        int cnt = 0, cnt1 = 0;
        for (int i = 0; i < a; ++i)
        {
            if (arr[i] == arr[0])
            {
                cnt++;
            }
            if (arr[i] == arr[a - 1])
            {
                cnt1++;
            }
        }
        if (cnt == a)
        {
            cout << "Yes" << endl;
        }

        else if (abs(cnt - cnt1) < 2 && cnt + cnt1 == a)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}