//L - 05: Binary Exponentiation 

#include <bits/stdc++.h>
#define ll long long
#define MAX 1000009
using namespace std;

void binary_exp(ll base,ll power)
{
    ll ans = 1;
    while(power>0){
        if(power%2==1){
            ans*=base;
            power--;
        }
        else{
            base*=base;
            power/=2;
            
        }
    }
    cout<<ans<<endl;
    
}
int main()
{
   binary_exp(0,9);
   return 0;
}