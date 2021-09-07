#include <bits/stdc++.h>
using namespace std;
int main()
{
char str[101];
int counter=1;
scanf("%s",&str);
int x=strlen(str);
sort(str,str+x);
for(int i=0;i<x-1;i++)
{
    if(str[i]!=str[i+1])
    {
        counter++;
    }
}

//check even or odd
   if(counter%2==1)
        printf("IGNORE HIM!\n");
    else
        printf("CHAT WITH HER!\n");
    return 0;



}
