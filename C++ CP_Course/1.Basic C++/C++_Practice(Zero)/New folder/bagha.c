#include<stdio.h>
int main(){
unsigned long long int x,y,z;
scanf("%llu %llu",&x,&y);
if (y<=2^64 && x<=2^64 && x!=y){
z=y-x;
printf("%llu",z);
}
return 0;
}
