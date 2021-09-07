#include <bits/stdc++.h>

using namespace std;


int main()
{
  int t;cin>>t;
  int arra[t];
  for(int i=0;i<t;i++)
  {
      cin>>arra[i];
  }
  int cnt=0;
  for(int j=1;j<t-1;j++)
  {
     if((arra[j-1]<arra[j] && arra[j]<arra[j+1])||(arra[j-1]>arra[j] && arra[j]>arra[j+1])) cnt++;
  }
    cout<<cnt<<endl;
}