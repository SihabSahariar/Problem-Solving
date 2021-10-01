#include <bits/stdc++.h>
#define ll long long 
#define MOD 1000000007
using namespace std;

ll POW(ll a,ll b)
{
    if(b==0) return 1;
    if(b==1) return a%MOD;
    ll temp=POW(a,b/2);
    if(b%2==0) return (temp*temp)%MOD;
    else return (((temp*temp)%MOD)*a)%MOD;
}

int main()
{
    int t;cin>>t;
    while(t--){
        ll base,power;cin>>base>>power;
        ll ans = POW(base,power);
        cout<<ans<<endl;
    }
   return 0;
}

 