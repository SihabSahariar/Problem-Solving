#include <bits/stdc++.h>
//https://www.spoj.com/problems/CSUMQ/
using namespace std;

int main()
{
	int t;cin>>t;
	int arra[t+3];
	for(int i=0;i<t;i++) cin>>arra[i];
	for(int i=1;i<t;i++) arra[i]+=arra[i-1];
	//for(int j=0;j<t;j++) cout<<arra[j]<<" ";cout<<endl;
	
	
	int k;cin>>k;
	while(k--){
	    int a,b;cin>>a>>b;
	    cout<<arra[b]-arra[a-1]<<endl;
	}
}