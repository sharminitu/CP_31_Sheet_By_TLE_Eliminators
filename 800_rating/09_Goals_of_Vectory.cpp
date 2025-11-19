// codeforces.com/problemset/problem/1877/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int n, s = 0;
        cin >> n;
        int arr[n - 1];
        for (int i = 0; i < n - 1; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            s -= arr[i];
        }
        cout << s << endl;
    }
}