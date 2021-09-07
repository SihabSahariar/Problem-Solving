#include<stdio.h>
int main(){
int A,B,C,result;
scanf("%d %d %d",&A,&B,&C);
if(A&&B&&C<=200){
	if (A>=B&&A>=C){
		printf("%d",A);
	}
	else if(B>=A && B>=C){
		printf("%d",B);
	}
	else if(C>=A && C>=B){
		printf("%d",C);
	}
}
return 0;
}
