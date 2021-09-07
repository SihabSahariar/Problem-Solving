#include <bits/stdc++.h>
#define ll long long  
using namespace std;

int main()
{
    int state[100000];
    string k,s;cin>>k>>s; 
    int ans = 0;
    int S = s.size(), K = k.size();
    for(int i = 0 ; i < S ; i++){
        for(int j = i ; j < K ; j++){
            if(s[i] == k[j])
                state[j-i] = 1;
        }
    }
    for(int i=0;i<K-S+1;i++)ans+=!state[i];
    cout<<ans<<endl; 
    return 0;
}