#include<bits/stdc++.h>
#define ll long long
using namespace std;
void cpc()
{
	#ifndef oj
		freopen("i.txt","r",stdin);
		freopen("o.txt","w",stdout);
	#endif
}
int main()
{
	//cpc();
	//implementing seive
		ll x=100000;
	//cin>>x;
	ll prime[x];
	for(ll i=0;i<x;i++)
		prime[i]=1;
	prime[0]=0,prime[1]=0;
	for(ll i=2;i*i<=x);i++)
	{
		if(prime[i]==1)
		{
			for(ll j=2;i*j<=x;j++)
				prime[i*j]=0;
		}
	}
	ll arra[x];
	ll j=0;
	for(ll i=0;i<x;i++)
	{
		if(prime[i]==1)
		{
			//cout<<i<<endl;
			arra[j]=i;
			j++;
		}
	}
	int t;cin>>t;
	while(t--)
	{
		ll start,end;
		cin>>start>>end;
		ll c=0;
		for(ll check=start;check<=end;check++)
		{
			ll count=0;
			for(ll a=0;a<j;a++)
			{
				if(arra[a]==check) continue;
				else if(check%arra[a]==0)
					count++;
				if(a>check) break;
			}
			//cout<<count<<endl;
			if(count==1)c++;
		}
		cout<<c<<endl;
	}


}
//https://ideone.com/86hOal
