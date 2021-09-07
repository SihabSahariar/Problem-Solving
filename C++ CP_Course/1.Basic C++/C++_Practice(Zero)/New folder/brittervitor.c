#include<stdio.h>
#include<math.h>

int main(){
	double x,y,cx,cy,r;
	scanf("%lf %lf",&x,&y);
	scanf("%lf %lf %lf",&cx,&cy,&r);
	if ((x-cx)^2+(y-cy)^2<r^2){
			printf("yes\n");
	}
	else{
		printf("no\n");
	}
return 0;
}
