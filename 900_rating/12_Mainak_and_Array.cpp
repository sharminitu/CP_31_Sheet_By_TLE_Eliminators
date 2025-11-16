#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;
        
        vector<long long>m(n);

        for (long long i = 0; i < n; i++)
        {
            cin >> m[i];
        }

       long long ans = m[n-1] - m[0];

       for(int i=1;i<n;i++){
        ans = max(ans,(m[i]-m[0]));
       }

       for (int i = 0; i < n-1; i++)
       {
           ans = max(ans, (m[n-1] - m[i]));
       }

       for (int i = 0; i < n-1; i++)
       {
           ans = max(ans, (m[i] - m[i+1]));
       }

       cout<<ans<<endl;
    }
    return 0;
}