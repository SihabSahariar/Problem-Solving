#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	double runrate;
	while(t--)
    {
        int totalrun,currentrun,restball;
        scanf("%d%d%d",&totalrun,&currentrun,&restball);
        int t=currentrun+1;

            double ball=(double)currentrun/((300.00-(double)restball)/6.00);

            if(currentrun>totalrun) //condition
                runrate=0.00;
            else
                runrate=((((double)totalrun+1)-(double)currentrun)*6.00)/(double)restball;

            printf("%0.2f %0.2f\n",ball,runrate);


    }
}
