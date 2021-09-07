#include <bits/stdc++.h>

using namespace std;

int main()
{
   int lim,bob;cin>>lim>>bob;
   int count=0;
   while(lim<=bob)
   {
   	lim*=3;bob*=2;
   	count++;
   	
   }
   cout<<count<<endl;
   return 0;
}