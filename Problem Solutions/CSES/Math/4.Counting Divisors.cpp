#include <bits/stdc++.h>
#define ll long long 
#define MOD 1000000007
using namespace std;


int main()
{
    
    ll d[1000005]={};
    for(int i=1;i<1000005;i++)
    {
        for(int j=i;j<1000005;j+=i)
        {
            d[j]++;
        }
    }
    
    
    int t;cin>>t;
    while(t--){
        ll x;cin>>x;
        cout<<d[x]<<endl;
    }
   return 0;
}

 