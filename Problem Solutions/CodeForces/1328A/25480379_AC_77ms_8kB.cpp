#include<bits/stdc++.h>
using namespace std;
long long step(long long x,long long y)
{
    return y-(x%y);
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long a,b;cin>>a>>b;
        if(a%b==0)cout<<"0"<<endl;
        else
        cout<<step(a,b)<<endl;
    }
}




