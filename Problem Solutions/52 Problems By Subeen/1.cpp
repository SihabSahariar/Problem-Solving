#include<bits/stdc++.h>
#define w(x) int x;cin>>x;while(x--)
using namespace std;
int main()
{
    #ifndef SUBEEN
    freopen("input.txt","w",stdin);
    freopen("output.txt","r",stdout);
    #endif

    w(x)
    {
        long long int t;
        cin>>t;
        bool a=t%2==0?true:false;
        if(a==true)
            cout<<"even"<<"\n";
        else
            cout<<"odd"<<"\n";
    }
}
