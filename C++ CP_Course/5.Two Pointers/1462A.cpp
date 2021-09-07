#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    int t;cin>>t;
    while(t--)
    {
           int n;cin>>n;
   int arra[n+3];
   for(int i=0;i<n;i++)cin>>arra[i];

   
   int l = 0, r = n-1;
   while(l<=r){
       if(l==r){
           cout<<arra[l];
           break;
       }
       else{
           cout<<arra[l]<<" "<<arra[r]<<" ";
           l++;r--;
       }
   }
   cout<<endl;
    }
   
   return 0;
}