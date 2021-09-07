#include<bits/stdc++.h>
#define ll long long int
#define w(x) long long int x;cin>>x;while(x--)
using namespace std;
int main()
{  long long int n,j=0;
   w(x){
       cin>>n;
       ll s=ceil(sqrt(n));
       ll r=s*s-n;
       ll x,y;
       if(r<s)
       {
           y=r+1;
           x=s;
       }
       else
       {
           x=2*s-r-1;
           y=s;
       }
       if( s %2==1 )swap(x,y);

       printf("Case %lld: %lld %lld\n",++j,x,y);

   }
   return 0;

}
