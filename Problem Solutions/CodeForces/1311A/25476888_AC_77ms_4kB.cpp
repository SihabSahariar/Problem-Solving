#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        if(a==b) cout<<0<<endl;
        else if(a>b && (a-b)%2==0 || a<b && (b-a)%2==1)cout<<1<<endl;
        else cout<<2<<endl;
    }
    return 0;
}
