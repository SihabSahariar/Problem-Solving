#include<stdio.h>
int main(){

int a,b,c;
scanf("%d %d",&a,&b);
if(0 < a < 100000000000 && 0 < b < 100000000000){
    if (a>=b){
        printf("Become a Jedi, you will!\n");
    }
    else{
        printf("Too old, you are!\n");
    }
}
return 0;
}
