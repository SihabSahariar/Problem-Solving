#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() 
{
	int t; 
	cin>>t;
	while(t--)
	{
		ll n,m,x,y;
		cin>>n>>m>>x>>y;
		ll cmin=min(2*x,y);
		char a[n][m];
		for(ll i=0; i<n; i++)
		{
			for(ll j=0; j<m; j++)
			cin>>a[i][j];
		}
		ll cost=0;
		for(ll i=0; i<n; i++)
		{
			for(ll j=0; j<m; j++)
			{
				if(j+1<m && a[i][j]=='.' && a[i][j+1]=='.')
				{
					cost+=cmin;
					j++;
					
				}
				else if(a[i][j]=='.')
				cost+=x;
			}
			
		}
		cout<<cost<<"\n";
	}
}