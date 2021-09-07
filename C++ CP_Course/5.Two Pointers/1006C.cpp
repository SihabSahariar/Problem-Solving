#include <bits/stdc++.h>
#define int long long 
using namespace std;

int32_t main()
{
   int t;cin>>t;
   int arra[t+3];
   for(int i=0;i<t;i++)cin>>arra[i];
   
   int i=0,j = t-1;
   int SL=arra[0],SR=arra[j],res=0;
   
   while(i<j){
        //cout<<SL<<" "<<SR<<endl;
        if(SL==SR)
           res = max(res,SR);
           
        if(SL<SR){
            i++;
            SL+=arra[i];
        }
        else{
            j--;SR+=arra[j];
        }
        
        
       

       
       
   }
   
   cout<<res<<endl;
}