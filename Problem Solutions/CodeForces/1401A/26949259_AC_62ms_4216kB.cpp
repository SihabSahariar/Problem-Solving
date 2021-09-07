#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int x,y;cin>>x>>y;
        int diff=y-x;
        if(diff>0)cout<<diff<<endl;
        else if(x%2==y%2)cout<<0<<endl;
        else cout<<1<<endl;
        
    }
    
}