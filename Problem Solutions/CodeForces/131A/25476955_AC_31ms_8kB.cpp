#include<bits/stdc++.h>
using namespace std;
bool checkerFirst(char s[100])
{
    bool c1=false,c2=true;
    if(s[0]<='z' && s[0]>='a')c1=true;
    if(strlen(s)>1)
    {
        for(int i=1;i<strlen(s);i++)
        {
            if(s[i]<='z' && s[i]>='a')
            {
                c2=false;
                break;
            }

        }

    }
    if(c1==true && c2==true)
        return true;
    else
        return false;


}
bool checkerSecond(char s[100])
{
    bool c=true;
    //if(s[0]<='z' && s[0]>='a')c1=true;
    if(strlen(s)>1)
    {
        for(int i=0;i<strlen(s);i++)
        {
            if(s[i]<='z' && s[i]>='a')
            {
                c=false;
                break;
            }

        }

    }
    if(c==true)
        return true;
    else
        return false;


}
int main()
{
    char name[100];
    gets(name);
    //cout<<checker(name);
    int len=strlen(name);
    if(len==1 && name[0]<='z' && name[0]>='a') printf("%c",toupper(name[0])); //z

    else if(checkerFirst(name)==true){ //hELLO
        printf("%c",toupper(name[0]));
        for(int i=1;i<len;i++)
        {
            printf("%c",tolower(name[i]));
        }
    }
    else if(checkerSecond(name)==true){ //HTTP
        for(int i=0;i<len;i++)
        {
            printf("%c",tolower(name[i]));
        }
    }

    else
        cout<<name;





    cout<<endl;
    return 0;
}
