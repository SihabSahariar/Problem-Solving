#include<stdio.h>

int main() {

    int N,a[100000],b[100000],Q,c[100000],x,y,z,temp=0;
    scanf("%d",&N);
    for(x=0;x<N;x++) {
        scanf("%d %d",&a[x],&b[x]);
    }

    scanf("%d",&Q);
    for(y=0;y<N;y++){
        if(c[y]>=a[Q-1] && c[y]<=b[Q-1])

               printf("YES\n");

       else
       printf("NO\n");




}
 return 0;
}



