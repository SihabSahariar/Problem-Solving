#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    ll t;cin>>t;
    ll sum=0;
    ll res=t*(t+1)/2;
    for(ll i=1;i<t;i++)
    {
        ll x;cin>>x;
        sum+=x;
    }
    cout<<res-sum<<endl; 
    return 0;
}