#include<bits/stdc++.h>
using namespace std;
const long long MAX_SIZE = 5000001;

vector<long long >isPrime(MAX_SIZE , true);

void seive(int n){
	isPrime[0] = isPrime[1] = false; //0,1 is not prime

	for(int i=2;i*i<=n;i++){
		if(isPrime[i]) //Still true?
			for(int j = i*i;j<=n;j+=i)
				isPrime[j] = false;
			
	}
}



int main()
{
	int n = 1000;
	seive(n);
	for(int i=0;i<=n;i++)cout<<i<<" - "<<isPrime[i]<<endl;

	int count = 0;
	for(int i=1;i<=n;i++)
		if(isPrime[i])count++;
	cout<<"COUNT = "<<count<<endl;
}