#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, c;

    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;
        int i = 0, j = n - 1;

        while (i < j && s[i] != s[j])
        {
            i++;
            j--;
        }
        c = j - i + 1;
        cout << c << endl;
    }

    return 0;
}