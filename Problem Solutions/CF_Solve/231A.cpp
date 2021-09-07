#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef test
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif 
	int t;cin>>t;
	int count=0; 
	while(t--)
	{
		int a,b,c;
		cin>>a>>b>>c; 
		if(a==1 && b==1 || a==1 && c==1|| b==1&&c==1)
			count++;
	}
	cout<<count<<endl; 
}