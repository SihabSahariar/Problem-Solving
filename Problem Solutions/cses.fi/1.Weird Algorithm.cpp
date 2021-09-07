#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    ll t;cin>>t;
    while(t)
    {
        cout<<t<<" ";
        if(t==1)break;
        else if(t%2==0)t/=2;
        else if(t%2==1)t=t*3+1;
    }
    return 0;
}