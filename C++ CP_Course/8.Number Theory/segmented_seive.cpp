#include<bits/stdc++.h>
#define ll long long 
using namespace std;

const long long MAX_SIZE = 32000;
vector<bool>isPrime(MAX_SIZE , true);
vector<int>primes;

void seive(int n=32000){
    isPrime[0] = isPrime[1] = false;
    
    for(int i=3;i*i<=n;i+=2){
        if(isPrime[i]){
            for(int j = i*i;j<=n;j+=i)
                isPrime[j] = false;
        }
    }
    
    primes.push_back(2);
    for(int i=3;i<=32000;i+=2){
        if(isPrime[i])primes.push_back(i);
    }
}



void seg_seive(ll left,ll right){
    ll sz = right-left+1;
    
    vector<bool>ranged_primes(sz,true);
    if(left==1)ranged_primes[0] = false;
    
    for(int i=0;primes[i]*primes[i]<=right;i++){
        ll current_prime = primes[i];
        ll base = (left/current_prime)*current_prime;
        if(base<left) base+=current_prime;
        for(int j = base;j<=right;j+=current_prime)
            ranged_primes[j-left] = false;
        if(base==current_prime)ranged_primes[base-left] = true;
    }
    
    for(int i=0;i<sz;i++){
        if(ranged_primes[i])cout<<i+left<<endl;
    }
    cout<<endl;
    
}



int main()
{
    seive();
    int t;cin>>t;
    while(t--){
        ll l,r;cin>>l>>r;
        seg_seive(l,r);
    }


}