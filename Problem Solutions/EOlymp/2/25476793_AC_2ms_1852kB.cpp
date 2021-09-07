#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define test(x) int x;cin>>x;while(x--)
#define MAX 10000000
using namespace std;
int main()
{
    ull x;cin>>x;
    if(x==0) cout<<1;
    else
    {
        ll count=0;
        while(x>0)
        {
            x/=10;
            count++;
        }
        cout<<count<<endl;
    }
    return 0;

}
