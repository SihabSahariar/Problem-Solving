#include <bits/stdc++.h>
using namespace std;
int main(){ 
  int N, I, J, V[3000], A[3000];

   while(scanf("%d",&N) == 1){ 
      for(I = 0; I < N; I++){
         scanf("%d",&V[I]);
         A[I] = 0;        
      }
      J = N-1;
      for(I = 0; I < J; I++)
         A[abs(V[I]-V[I+1])] = 1;
      J = 1;
      for(I = 1; I < N; I++){
         if(!A[I]){
            J = 0;
            break;
         }
      }
      if(J)
         printf("Jolly\n");
      else 
         printf("Not jolly\n");
   }
   return 0;
}