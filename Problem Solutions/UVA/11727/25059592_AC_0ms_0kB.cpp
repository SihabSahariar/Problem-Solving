#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int a,b,c,min,max;
        scanf("%d %d %d",&a,&b,&c);
        int sum=a+b+c;

        if(a>=1000 && a<=10000 && b>=1000 && b<=10000 && c>=1000 && c<=10000)
        {
            if(a>b && a>c) max=a;
            else if(b>a && b>c) max=b;
            else max=c;

            if(a<b && a<c) min=a;
            else if(b<a && b<c) min=b;
            else min=c;
            sum=sum-(max+min);
            printf("Case %d: %d\n",i,sum);
        }
    }
}
