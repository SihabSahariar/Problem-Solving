#include<stdio.h>
int main(){

long long int b,c,d,sum;
int a;
scanf("%d",&a);
for(b=1;a>=b;b++){

	scanf("%lld",&c);
	sum=(c*c)+b;
	printf("%d\n",sum);
}
return 0;
}
