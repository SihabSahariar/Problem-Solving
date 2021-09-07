#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,t;cin>>n>>t;
  string str;cin>>str;
  for(int i=0;i<t;i++)
  {
      for(int j=0;j<str.size();j++)
      {
          if(str[j]=='B' && str[j+1]=='G')
          {
              //arra[j]="G";
              //arra[j+1]=
              swap(str[j],str[j+1]);
              j++;
          }
      }
  }
  cout<<str<<endl;
}