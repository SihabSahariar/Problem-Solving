#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
ll f(ll n)
{
    return(n*(3*n+1))/2;
}
 
int main()
{
   int t;cin>>t;
   while(t--)
   {
       ll n;cin>>n;
       ll ans=0;
       while(n>=2)
       {
           int pos,start=1;
           while(1)
           {
               ll check=f(start);
               if(check>n)
               {
                   pos=start;
                   pos--;
                   break;
               }
               start++;
           }
           n-=f(pos);
           ans++;
       }
       cout<<ans<<endl;
   }
}