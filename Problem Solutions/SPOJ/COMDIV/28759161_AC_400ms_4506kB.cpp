#include <bits/stdc++.h>
#define ll long int 
using namespace std;

ll ret(ll a,ll b)
{
    if(b==0) return a;
    else return ret(b,a%b);
}

int main()

{
    int t;
    ll a,b,i,g,x;
    cin>>t;
    while(t--)

    {
        int ans=0; 
        scanf("%ld %ld",&a,&b);
        x=ret(a,b);
        for(i=1;i<=sqrt(x);i++)
        {
            if(i*i==x)ans++;

            else if(x%i==0) ans+=2;
  
        }
           printf("%d\n",ans);
    }
    return 0;
}