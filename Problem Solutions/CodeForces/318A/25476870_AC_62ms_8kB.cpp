#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll result(ll x,ll y)
{
     ll temp;
     if(x%2==0)
        temp=x/2;
     else
        temp=(x+1)/2;

        if(y <= temp)
           return 2*y-1;
        else
           return 2*(y-temp);
}
int main()

{

    ll n, pos;
    while(cin>>n>>pos){
        cout<<result(n,pos)<<endl;
    }
    return 0;
}
