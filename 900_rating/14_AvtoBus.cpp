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

     long long x,y;
        if(n<4 || n%2==1){

            cout << -1 << endl;
        }
        else{

            x = (n+5)/6;
            y = n / 4;
            cout << x << " " << y << endl;
    }
}
    return 0;
}
