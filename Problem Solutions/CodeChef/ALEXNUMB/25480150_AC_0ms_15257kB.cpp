#include<stdio.h>
#define ll long long int
ll result(ll n)
{
    return (n*(n-1))/2;
}
int main()
{
	int t;
	ll n,temp;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld\n",&n);
	     temp=result(n);
         printf("%lld\n",temp);

			if(t==0)break;
			char s;
			do
			{
				s=getchar_unlocked();
			}
			while(s!='\n');
	}
		return 0;
	}