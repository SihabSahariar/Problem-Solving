#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t;cin>>t;
   long long arra[t+1];
   for(int i =0;i<t;i++)cin>>arra[i];
   
   //Sorting
    sort(arra,arra+t);
   //for(int i=0;i<t;i++)cout<<arra[i]<<" ";
   int cnt = 1;
   for(int i=1;i<t;i++){
       if(arra[i]!=arra[i-1])cnt++;
   }
   cout<<cnt<<endl;
   return 0;
}