#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int n,m;
	cin>>n>>m;
	int list1[n+1];
	for(int i=1;i<=n;i++)cin>>list1[i];

	int dp[n+1];
	set<int>s;
	for(int i=n;i>=1;i--){
		s.insert(list1[i]);
		dp[i] = s.size();
	}

	for(int i=1;i<=m;i++){
		int idx;cin>>idx;
		cout<<dp[idx]<<endl;
	}

}