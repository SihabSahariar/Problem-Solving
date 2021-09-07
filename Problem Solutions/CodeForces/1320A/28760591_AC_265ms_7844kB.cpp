#include <bits/stdc++.h>
#define ll long long  
using namespace std;
const int MX = 1000000;
const int CX = 400000;
long long arra[1000001];
int main()
{
    int n;cin>>n;
    long long ans=0;
    for(int i=0;i<n;i++) {
		int x;cin>>x;
		arra[x+CX-i]+=x;
	}
	for(int i=0;i<=MX;i++) 
	    ans=max(ans,arra[i]);
	cout<<ans<<endl;
	return 0;
	
}