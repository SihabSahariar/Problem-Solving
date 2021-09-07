#include <iostream>
#include<stdio.h>
#include <string>
#include <ctype.h>
#include <string.h>
using namespace std;
int main() {
int t,k,n;
   char s[101];
   scanf("%d",&t);
   for(k=1;t>=k;k++){
   scanf("%s",&s);
   for(int i = 0; i < strlen(s); i++)
       s[i] = toupper(s[i]);
   printf("Case %d: %s\n",k,s);
   }
   return 0;
}
