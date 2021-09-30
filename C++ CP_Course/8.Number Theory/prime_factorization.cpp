#include <bits/stdc++.h>
#define ll long long
#define MAX 1000009
using namespace std;

vector<bool>isPrime(MAX,true);
vector<long long>primes;


void seive(int n=MAX){
    isPrime[0] = isPrime[1] = false;
    for(int i= 3;i*i<=n;i+=2){
        if(isPrime[i]){
            for(int j = i*i;j<=n;j+=i){
                isPrime[j] = false;
            }
        }
    }
    
    primes.push_back(2);
    for(int i=3;i<=n;i+=2){
        if(isPrime[i])primes.push_back(i);
    }
    
}


void seg(ll l, ll r){
    int sz = r-l+1;
    vector<bool>lst(sz,true);
    for(int i = 0 ; primes[i]*primes[i]<=(r);i++)
    { 
        int base = (l/primes[i])*primes[i]; //From where to start marking 
        if(base<l) base+=primes[i];
        if(l==1)lst[0] = false;
        for(int j = base;j<=r;j+=primes[i]) lst[j-l] = false; 
        if(primes[i]==base)lst[base-l] = true;
    }
    for(int i=0;i<sz;i++)if(lst[i])cout<<l+i<<" ";
    cout<<endl;
}


void PrimeFactors(int n){
    vector<ll>pm_fact;
    if(isPrime[n])pm_fact.push_back(n);
    else{
        for(int i=0;primes[i]<=n;i++){
            if(n%primes[i]==0)pm_fact.push_back(primes[i]);
        }
    }
    for(int j=0;j<pm_fact.size();j++)cout<<pm_fact[j]<<" ";
    cout<<endl; 
    
}

void PrimeFactors2(int x){
    set<ll>ans;
    int d = 2;
    while(x>1){
        while(x%d==0){
            ans.insert(d);
            x/=d;
        }
        d++;
    }
    
    for(auto j = ans.begin(); j != ans.end();j++)cout<<*j<<" ";
    cout<<endl; 
}

void PrimeFactors3(int x){
    for(int i=2;i*i<=x;i++){
        if(x%i==0){
            int power = 0;
            while(x%i==0){
                power++;
                x = x/i;
            }
            cout<<i<<"^"<< power<<" X ";
        }
    }
    if(x>1)cout<<x<<"^"<<1<<endl;
}

int main()
{
   seive();
   seg(2,17);
   PrimeFactors(655);
   
   return 0;
}
