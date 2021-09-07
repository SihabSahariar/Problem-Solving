#include<bits/stdc++.h>

using namespace std;
int main()
{
    char p[101];
    cin>>p;
    int len=strlen(p);
    sort(p,p+len);

    int count=0;
     for(int i=0;i<len;i++)
     {
        if(p[i]!=p[i+1]) count++;
     }
     if(count%2==0)
        cout<<"CHAT WITH HER!"<<endl;
        else cout<<"IGNORE HIM!"<<endl;
}
