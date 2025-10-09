#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
    int a,k;
    cin>>a>>k;

    string s;
    cin>>s;

    vector<int>frequency_characters(26,0);
    for(int i=0;i<a;i++){
        frequency_characters[s[i]-'a']++;
        }
        long long odd_frequency =0;

        for(int i=0;i<26;i++){
            odd_frequency += frequency_characters[i]%2;
        }

        if(odd_frequency>k+1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

    
    }


}