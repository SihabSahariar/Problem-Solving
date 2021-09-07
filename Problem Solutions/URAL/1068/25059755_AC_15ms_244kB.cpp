#include<stdio.h>
int main(){
int a,i,sum=0;
scanf("%d",&a);
if(a>0){
for(i=1;i<=a;i++){
sum+=i;
}
}
else if(a<=1){
for(i=1;i>=a;i--){
sum+=i;
}
}
printf("%d\n",sum);
}