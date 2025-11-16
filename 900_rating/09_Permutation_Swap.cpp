// codeforces.com/problemset/problem/1828/B
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

        for(int i=1 ; i<=n;i++){
            cin>>a[i];
        }

        int k =0;
        for(int i=1;i<=n;i++){
            
            k = __gcd(k,(abs(a[i]-i)));
        }

    cout<<k<<endl;
}

    return 0;
}