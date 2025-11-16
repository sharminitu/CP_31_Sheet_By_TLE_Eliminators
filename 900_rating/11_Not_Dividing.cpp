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
        long long m[n];

        for (int i = 0; i < n; i++)
        {
            cin >> m[i];
        }

        for (int i = 0; i < n - 1; i++)
        {
            if (m[i]==1)
            {
                m[i] ++;;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if(m[i+1]%m[i]==0){
                m[i+1]+=1;
                
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout<<m[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}