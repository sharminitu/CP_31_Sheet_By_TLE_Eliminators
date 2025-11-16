#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int a,b,n,s=0;
        cin>>a>>b>>n;
        int m[n];

        for(int i=0;i<n;i++){
            cin>>m[i];
            s+=m[i];
        }
        cout<<s<<endl;
    }
    return 0;
}