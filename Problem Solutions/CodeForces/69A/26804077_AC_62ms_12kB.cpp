#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;cin>>t;
     int c1=0,c2=0,c3=0;
     int arra[t][3];
     int diff=t+1;
     for(int i=0;i<t;i++)
     {
         for(int j=0;j<3;j++)
         {
             cin>>arra[i][j];
         }
     }
    for(int k=0;k<t;k++)
    {
        c1+=arra[k][0];
        c2+=arra[k][1];
        c3+=arra[k][2];
    }
    if(c1==0 && c2==0 && c3==0)cout<<"YES\n";
    else cout<<"NO\n";
    //cout<<c1<<endl<<c2<<endl<<c3;
}