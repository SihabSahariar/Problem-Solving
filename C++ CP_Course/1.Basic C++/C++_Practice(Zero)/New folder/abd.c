#include<stdio.h>
#include <string.h>
int main()
{
    int x,y,t,T,length,a,temp;
    char s[10001];
    scanf("%d",&t);
    while(t--) {
        scanf("%d %d %s",&x,&y,s);
        length= strlen(s);
        for(temp=0,a=0;a<=length;a=a+2){
         if(s[a]=='N'){
                temp= s[a+1]-'0';
                y=y+temp;
 
         }
         else if(s[a]=='S'){
                temp= s[a+1]-'0';
                y=y-temp;
 
         }
         else if(s[a]=='E'){
                temp= s[a+1]-'0';
                x=x+temp;
 
         }
         else if(s[a]=='W'){
                temp= s[a+1]-'0';
                x=x-temp;
         }
        }
        printf("%d %d\n",x,y);
    }
    return 0;
}