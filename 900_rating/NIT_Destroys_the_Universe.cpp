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
        long long v[n];
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int count_zero = 0;
        for ( int i = 0; i < n; i++)
        {
            if (v[i] == 0)
            {
                count_zero++;
            }
        }

        bool Found_Zero = false;

        int left = 0;
        int right = n-1;

        while(v[left]==0)
            left++;

        while (v[right] == 0)
            right--;


        for(int i =left ;i<=right;i++){
            if(v[i]==0){
                Found_Zero = true;
                break;
            }
        }
        if(count_zero ==n){
            cout<<0<<endl;
        }
        else if(Found_Zero ==false){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
    return 0;
}


