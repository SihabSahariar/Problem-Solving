#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int t;
   scanf("%lld",&t);
   for(long long int i=1;i<=t;i++)
   {
        long long x;
        scanf("%lld",&x);


        if(x%180==0 && x>=180)
        {
            long long l=(x/180)+2;
            long double a=(long double)x/l;
           // printf("Case %lld: %lld %.lf\n",i,l,round(a));
            cout<<"Case "<<i<<": "<<l<<" "<<setprecision(10) << round(a)<<"\n";
        }
        else
        {
            printf("Case %d: Impossible\n",i);
        }
   }
    return 0;
}
