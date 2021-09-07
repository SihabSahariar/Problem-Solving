#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    char c[40];
    int i;
    while(gets(c))
    {
        for(i=0;c[i]!='\0';i++)
        {
            if(c[i]=='A'||c[i]=='B'||c[i]=='C')
                printf("2");
            else if(c[i]=='D'||c[i]=='E'||c[i]=='F')
                printf("3");
            else if(c[i]=='G'||c[i]=='H'||c[i]=='I')
                printf("4");
            else if(c[i]=='J'||c[i]=='K'||c[i]=='L')
                printf("5");
            else if(c[i]=='M'||c[i]=='N'||c[i]=='O')
                printf("6");
            else if(c[i]=='P'||c[i]=='Q'||c[i]=='R'||c[i]=='S')
                printf("7");
            else if(c[i]=='T'||c[i]=='U'||c[i]=='V')
                printf("8");
            else if(c[i]=='W'||c[i]=='X'||c[i]=='Y'||c[i]=='Z')
                printf("9");
            else
                printf("%c",c[i]);
        }
        printf("\n");
    }
    return 0;
}