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

        string s = to_string(n);

        int number_of_digit = s.size();

        int first_digit = s[0] - '0';

        int ans = 9 * (number_of_digit - 1) + first_digit;

        cout << ans << endl;
    }
}