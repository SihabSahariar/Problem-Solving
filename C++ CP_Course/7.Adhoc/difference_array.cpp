//L - 03: Difference Array/Update Range Query Algo | Ad-hoc | Competitive Programming
#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>val={1,1,1};
	int t = val.size()+1;
	vector<int>dif(t);
	
	//Array Difference
	dif[0] = val[0];
	for(int i=1;i<val.size();i++) dif[i] = val[i]-val[i-1];

	//Query
	int l =0,r = t-2,v = 1;//cin>>l>>r>>v;
	dif[l]+=v;
	dif[r+1]-=v;
	

	//Prefix Sum Concept
	for(int i=0;i<val.size();i++){
		if(i==0)val[i] = dif[i];
		else val[i] = dif[i]+val[i-1];
	}
	
	//Print element
	for(int i =1 ;i<val.size();i++)cout<<val[i]<<" ";
}