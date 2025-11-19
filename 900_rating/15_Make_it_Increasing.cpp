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

       for(int i=0;i<n;i++){
        cin>>v[i];
       }

       int c=0;
       for (int i = 0; i < n-1; i++)
       {
           if(v[i]>v[i+1]){
            v[i]=v[i]/2;
            c++;
           }
       }
       cout<<c<<endl;
    }
    return 0;
}
