#include<bits/stdc++.h>
using namespace std;
void ojj()
{
	#ifndef oj
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

int main()
{
	ojj();
	int t;cin>>t;
	char arra[t+1];
	int i=0;
	int count=0;
	for(int k=0;k<t;k++)
		cin>>arra[k];
	
	for(int j=0;j<t-1;j++)
	{
		if(arra[j]==arra[j+1])
			count++;
	}
	cout<<count<<endl;
}