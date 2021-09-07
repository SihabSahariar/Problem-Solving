#include<stdio.h>
int main(){
int t,ara[4],i,k,x,y,z;
scanf("%d",&t);
while(t--){
    int j=0,count=0;
    float sum=0,avg;

for(i=0;i<=4;i++){
	scanf("%d",&ara[i]);
while(j<=4){
	sum=sum+ara[j];
	j++;
}
avg=sum/5.0;
for(x=0;x<=4;x++){
	if (ara[x]>=avg){count++;}
}
printf("Case %d:- %d\n",j++,count);
}
}
return 0;
}
