#include <bits/stdc++.h>
#define ll long long 

using namespace std;

int main()
{
   int arra[3];
   for(int i=0;i<3;i++)cin>>arra[i];
   sort(arra,arra+3); 
   int i=1;
   vector<long long>p;
   while(i<=arra[2])
   {
      if(arra[0]%i==0 && arra[1]%i==0 && arra[2]% i==0)
      {
          p.push_back(i);
          //break; 
      }
      i++; 
   }
   cout<<p[p.size()-1]<<endl;
   
   
}