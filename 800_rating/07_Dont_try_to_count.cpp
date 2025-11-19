#include <bits/stdc++.h>
using namespace std;
bool choice(string m, string s)
{
    if (s.size() < m.size())
    {
        return false;
    }
    for (int i = 0; i < s.size() - m.size() + 1; i++)
    {
        if (s.substr(i, m.size()) == m)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;

        string s;
        cin >> s;
        string m;
        cin >> m;

        string s0 = s;
        string s1 = s0 + s0;
        string s2 = s1 + s1;
        string s3 = s2 + s2;
        string s4 = s3 + s3;
        string s5 = s4 + s4;

        long long ans = -1;
        if (choice(m, s0))
        {
            ans = 0;
        }
        else if (choice(m, s1))
        {
            ans = 1;
        }
        else if (choice(m, s2))
        {
            ans = 2;
        }
        else if (choice(m, s3))
        {
            ans = 3;
        }
        else if (choice(m, s4))
        {
            ans = 4;
        }
        else if (choice(m, s5))
        {
            ans = 5;
        }

        cout << ans << endl;
    }
}