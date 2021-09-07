#include<bits/stdc++.h>
using namespace std;
int m1ain()
{
    char str[100],news[100];
    cin>>str;
    int len=strlen(str);
    sort(str,str+len);
    for(int i=0;i<len;i++)
    {
        if(str[i]==str[i+1])
        {
            str[i]='0';str[i+1]='0';
            continue;
        }

    }
    int j=0;
    for(int i=0;i<len;i++)
    {
        if(str[i]!='0')
        {
            news[j]=str[i];
            j++;
        }
//    cout<<str[i];

    }
    if(j==0)cout<<"Empty String"<<endl;
    else
    {
         int x=0;
        while(x<j)
        {
            cout<<news[x];
            x++;
        }
        cout<<endl;
    }
    return 0;

}
int main()
{
    string str;
    cin>>str;
    for(int i=1;i<str.length();i++)
    {
        if(str[i] == str[i-1])
        {
            str.erase(i-1,2);
            i=0;
        }
    }
    if(str.length() == 0)
        cout<<"Empty String";
    else
        cout<<str;
    return 0;
}
