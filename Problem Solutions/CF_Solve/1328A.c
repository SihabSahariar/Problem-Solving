#include<stdio.h>
int main()
{
    long t;
    scanf("%ld",&t);
    while(t--)
    {
        long a,b,count=0;
        scanf("%ld %dl",&a,&b);
       if(a%b==0)

        printf("0\n");
       else
       printf("%ld\n",b-a%b);

    }
}
