#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long x;cin>>x;
        long long xx=x/2;
        long long sum=(xx*(xx+1)*((2*xx)+1))/6;
        cout<<8*sum<<endl;
    }
    return 0;
}
