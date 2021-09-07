#include<bits/stdc++.h>
using namespace std;
long long int check(long long int n)
{
    int v;
    if(n<=100)
        v=91;
    else if(n>100)
        v=n-10;
    return v;
}

int main(void)
{
    long long int n,result;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            break;
        result=check(n);
        printf("f91(%lld) = %lld\n",n,result);
    }
}
