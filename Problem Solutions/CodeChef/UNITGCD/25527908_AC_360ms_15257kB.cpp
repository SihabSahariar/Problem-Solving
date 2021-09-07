#include <bits/stdc++.h>
#define ll long long 
#define MAX 1000000
using namespace std;

int main() {
    
int t;
    cin>>t;
    
while(t--)
    {
        
ll int n;
        cin>>n;
        
if(n==1)
        {
cout<<"1"<<"\n";
            
cout<<1<<" "<<1<<"\n";
        
        
}
        
else
        {
cout<<n/2<<"\n";
            
if(n==2)
            
cout<<2<<" "<<1<<" "<<2<<" "<<"\n";
            
else
            {
                
cout<<3<<" "<<1<<" "<<2<<" "<<3<<"\n";
                
for (int i=2;i<=n/2;i++)
                {
                    
if(2*i+1<=n)
                    
cout<<2<<" "<<2*i<<" "<<2*i+1<<"\n";
                    
else
               
 cout<<1<<" "<<2*i<<"\n";
                
}
            
}
       
 }
    
}
		
return 0;

}
