#include<bits/stdc++.h>
using namespace std;
bool prime[]

bool isPrime(int n)
{
	if(n==2||n==3) return true; 
	else if(n==1 || n%2==0) return false;
	else{
		bool ans = true;
		for(int i=3;i*i<=n;i++){
			if(n%i==0)return false;
		}
		return true;
	}
}



int main()
{
	int t;cin>>t;
	int count=0;
	for(int i=0;i<=t;i++)
		if(isPrime(i)==1)
			count++;
	cout<<count<<endl;
	
}