#include<bits/stdc++.h>
#define MAX 10000000
#define ll long long
using namespace std;
int main()
{

    ll t;cin>>t;
    ll arra[t];
    for(ll i=0;i<t;i++)
        cin>>arra[i];
    sort(arra,arra+t);
    for(ll i=0;i<t;i++)
        cout<<arra[i]<<endl;
    return 0;
}
