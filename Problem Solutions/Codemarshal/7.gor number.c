#include<stdio.h>

int main()
{

    int t;
    scanf("%d",&t);
    int j;
    for(j=1;j<=t;j++)
    {
        int avg;
        scanf("%d",&avg);
        int marks[avg];
        int sum=0;
        int okay=1;
        int i;
        for(i=0;i<avg;i++)
        {
            scanf("%d",&marks[i]);
            if(marks[i]>100 || marks[i]<0)
                okay=0;
            sum+=marks[i];
        }
       //float a=(float)sum/avg;
        if(okay== 1)
            printf("Case %d: %d\n", j,sum/avg);

    }
    return 0;
}
