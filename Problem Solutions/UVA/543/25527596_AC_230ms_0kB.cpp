#include<bits/stdc++.h>
using namespace std;
int check(long long int n)
{
   long long int l,count,i,j;

    count=1;
    if(n==0 || n==1)
        return count=0;
    else if(n==2)
        return count=1;
    else
    {
        l=sqrt(n);
        for(i=2; i<=l+1; i++)
        {
            if(n%i==0){
                count=0;
            break;
            }
        }
        return count;
    }
}
int main()
{
   long long int i,j,k,n,sum,l,a,p,count;
    while(scanf("%lld",&n)==1)
    {
        p=1;
        sum=0;
        count=0;
        if(n==0)
            break;

        for(i=2; i<n; i++)
        {

            l=n-i;
            sum=check(i);
            count=check(l);
            if (sum==1 && count==1)
            {
                printf("%lld = %lld + %lld\n",n,i,l);
                p=0;
                break;
            }
            else
                continue;
        }
        if(p==1)
            printf("Goldbach's conjecture is wrong.\n");
    }
    return 0;
}