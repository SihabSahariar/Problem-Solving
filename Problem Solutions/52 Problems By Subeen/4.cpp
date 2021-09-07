//Template For CP
#include<bits/stdc++.h>
#include<string.h>
#define w(x) int x;cin>>x;for(int i=1;i<=x;i++)
#define PI  3.14159265358979323846
using namespace std;
int main()
{
    int t;cin>>t;
    for(int j=1;j<=t;j++)
    {
      int a;
      cin>>a;
      cout<<"Case "<<j<<": ";
      for(int i=1;i<=a;i++)
      {
           if(a%i==0)
           {
               cout<<i;
               if(i!=a)cout<<" ";
               //else
           }
      }
      cout<<endl;
    }



//Code
}

