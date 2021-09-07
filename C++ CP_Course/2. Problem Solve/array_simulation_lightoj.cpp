#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;cin>>t;
    for(int i=1;i<=t;i++){
        
        
        int size,op;cin>>size>>op;
        int arra[size];
        for(int i=0;i<size;i++)cin>>arra[i];
        while(op--){
            char oper;
            cin>>oper;
            
            if(oper== 'R')
            {
                for(int i=0;i<size/2;i++){
                    swap(arra[i],arra[size-1-i]);
                }
            }
            
            else if(oper=='S')
            {
                int d;cin>>d;
                for(int i=0;i<size;i++){
                    arra[i]+=d;
                }
            }
            
            else if(oper=='M')
            {
                int d;cin>>d;
                for(int i=0;i<size;i++){
                    arra[i]*=d;
                }
            }         
            
            else if(oper=='D')
            {
                int d;cin>>d;
                for(int i=0;i<size;i++){
                    arra[i]/=d;
                }
            }     
            
            else if(oper=='P')
            {
                int y,z;cin>>y>>z;
                swap(arra[y],arra[z]);
            }            
        }
        
        printf("Case %d:\n",i);
        for(int j=0;j<size-1;j++)cout<<arra[j]<<" ";
        cout<<arra[size-1]<<endl;
        
        
    }
   
   return 0;
}