#include<stdio.h>
int main()
{
    int a,b=0,c,d,N;
    scanf("%d",&N);
    if (N< 100){
        for(a=1;a<=10;a++){
            c=N*a;
            printf("%d x %d = %d\n",N,a,c);
        }

    }

}
