#include<bits/stdc++.h>
using namespace std;
int mainPast()
{
    int t;cin>>t;
    int arra[t];
    for(int i=0;i<t;i++)
        cin>>arra[i];
    bool hard=false;
    for(int j=0;j<t;j++)
    {
        if(arra[j]==1)hard=true;
    }
    if(hard==true) cout<<"HARD"<<endl;
    else cout<<"EASY"<<endl;

}
int main()
{
    int t;cin>>t;
    int arra[t];
    bool hard=false;
    for(int i=0;i<t;i++)
    {
        cin>>arra[i];
         if(arra[i]==1)hard=true;
    }

    if(hard==true) cout<<"HARD"<<endl;
    else cout<<"EASY"<<endl;

}
