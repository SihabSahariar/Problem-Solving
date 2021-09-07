#include <stdio.h>

int main()
{
  int c,n,b,t,a,fact = 1;
  scanf("%d",&t);
  for(a=0;a<=t;a++){
    scanf("%d",&b);
    for(c=1;c<b;c++){
        fact=b*c;

    }
    printf("%d\n",fact);
  }


  return 0;
}
