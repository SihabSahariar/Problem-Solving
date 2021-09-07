#include <bits/stdc++.h>
using namespace std;

int main(){
    
   int t;cin>>t;
   while(t--)
   {
        unsigned long long int n;cin>>n;
        long long int sum1=0,sum=0;
        sum=n*(n+1)/2;
        
        for(unsigned long long int i=0;;i++)
        {
           long double x=pow(2,i);
           if(x>n)break;
           if(x<=n)
             sum1+=x; 
        }
        cout<<sum-2*sum1<<endl;
   }
 
}
