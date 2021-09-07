#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,sum,u1,u2,u,d;
    while(scanf("%d %d",&n,&m)==2)
    {
        if(n<0 && m<0)
            break;
        if(n>m)
        {
           d =n-m;
        }
        else
        {
            d=m-n;
        }

        if(d>=50)
            d = 100-d;
       printf("%d\n",d);
    }
return 0;
}