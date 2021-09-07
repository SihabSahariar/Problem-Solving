#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arra[3];
    int t;cin>>t;
    for(int j=1;j<=t;j++)
    {
        for(int x=0;x<=2;x++)cin>>arra[x];
        sort(arra,arra+3);
      if(arra[0]<=1000 && arra[1]<=1000 && arra[2]<=1000)
      {
            cout<<"Case "<<j<<": " ;
            for(int i=0;i<3;i++)
            {
                if(i==2)
                      cout<<arra[i];
                else
                      cout<<arra[i]<<" ";
            }
            cout<<endl;
      }
    }
}
