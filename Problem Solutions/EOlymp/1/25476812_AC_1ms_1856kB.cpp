#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll x;cin>>x;
    if(x>=10 && x<=99)
    {
        printf("%lld %lld\n",x/10,x%10);
    }
    return 0;
}
