#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
using namespace std;
int main()
{
  string str;cin>>str;
  ll count=1,res=1;
  char last;
  for(ll i=1;i<str.size();i++)
  {
       
      if(str[i]==str[i-1])
          count++;
      else         
          count=1;
          
      res=max(res,count);
  }
  cout<<res<<endl; 
  return 0;
}
