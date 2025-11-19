#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<long long> p_arr;
        p_arr.push_back(0);
        for (int i = 0; i < n; i++)
        {
            long long point;
            cin >> point;

            p_arr.push_back(point);
        }

        p_arr.push_back(x);

        n = p_arr.size();

        long long max_distance_between_points = INT_MIN;

        for (int i = 1; i < n; i++)
        {
            if (i == n - 1)
            {
                max_distance_between_points = max(max_distance_between_points, 2 * (p_arr[i] - p_arr[i - 1]));
            }
            else
            {
                max_distance_between_points = max(max_distance_between_points, (p_arr[i] - p_arr[i - 1]));
            }
        }

        cout << max_distance_between_points << endl;
    }

    return 0;
}