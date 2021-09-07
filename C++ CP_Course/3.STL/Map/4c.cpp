#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	map<string,int>mp;
	int count=0;
	while(t--){
		
		string str;cin>>str;
		if(mp.find(str)==mp.end()){
			mp[str] = 1;
			cout<<"OK\n";
		}
		else{
			cout<<str<<mp[str]++<<endl;
			
		}
	}
}