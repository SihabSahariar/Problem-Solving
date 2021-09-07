#include <stdio.h>

int main(void) {
int a,b,n;
scanf("%d",&n);
for(int k=1;k<=n;k++)
{
	scanf("%d %d",&a,&b);
	int sum=a+b;
	printf("Case %d: %d\n",k,sum);
}
	return 0;
}
