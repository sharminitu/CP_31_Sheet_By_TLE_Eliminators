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
        string s;
        cin >> s;

        bool continus_tree_time = false;
        int total_count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.' && i + 1 < n && s[i + 1] == '.' && i + 2 < n && s[i + 2] == '.')
            {
                continus_tree_time = true;
                break;
            }
            if (s[i] == '.')
            {
                total_count++;
            }
        }

        if (continus_tree_time)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << total_count << endl;
        }
    }

    return 0;
}