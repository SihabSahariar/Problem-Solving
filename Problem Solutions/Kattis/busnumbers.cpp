#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef oj
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int c;cin>>c;
	int bus[c];
	for(int i=0;i<c;i++)
		cin>>bus[i];
	sort(bus,bus+c);
	//141 142 143 174 175 180
	int start,end; 
	for(int j=0;j<c;j++)
	{
		if(bus[j+1]-bus[j]==1)
		{	
			j++;
			start=
		}
	}
	
	
}