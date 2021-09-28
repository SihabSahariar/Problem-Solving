#include<bits/stdc++.h>
#define ll long long 
#define MAX_SIZE 5000001
using namespace std;

vector<bool>isPrime(MAX_SIZE,true);
vector<ll>primes;

void seive(ll n){
    for(int i=3;i*i<=n;i+=2){ // just check prime between odd number
        if(isPrime[i])
        {
            for(int j= i*i;j<=n;j+=i)isPrime[j] = false; // all multples are being marked
        }
    }
    
    primes.push_back(2);
    for(int i = 3; i<=n;i+=2){
        if(isPrime[i])primes.push_back(i);
    }
    
}


void ranged_seive(int l , int r){
    int sz = r-l+1; // size of array to map segmented prime numbers 
    
    vector<bool>mp_prm(sz,true); // initializing a vector to map of sz size with all indeces true.
    if(l==1)mp_prm[0] = false; // staring from 1 where 1 is composite number.
    
    for(int i = 0; primes[i]<=sqrt(r);i++){ // going through all the prime numbers between [2,sqrt(r)]
        int curr_prime = primes[i];
        int start = (l/curr_prime)*curr_prime; // finding the closest starting point 
        if(start<l) start+=curr_prime;
        
        for(int j = start;j<=r;j+=start){ // going to r and flagging the multiples of prime number.
            mp_prm[j-l] = false; // storing the value by shifting j-l (start -l)
        }
        if(start==curr_prime) mp_prm[start-l] = true; //starting is current prime, keep it as true
        
    }
    
    for(int i=0;i<sz;i++)
    {
        if(mp_prm[i])cout<<i+l<<" "; // adding l everytime as we shifted to -l 
    }
    cout<<endl;
}





int main()
{
    seive(10000);
    ranged_seive(2,17);
    return 0;
}