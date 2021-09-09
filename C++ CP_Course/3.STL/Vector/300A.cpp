#include<bits/stdc++.h>
#define int long long 
using namespace std;

// Solution : if n(odd) is even, move one number to zero vector. if n(even)==0, move two number from odd to even vector.
int32_t main(){
	int t;cin>>t;
	vector<int>pos;
	vector<int>neg;
	vector<int>zero;
	for(int i=0;i<t;i++){
		int p;cin>>p;
		
		if(p<0)neg.push_back(p);
		else if(p>0) pos.push_back(p); 
		else zero.push_back(0);
	}
	if(neg.size()%2==0){
		zero.push_back(neg[0]);
		neg.erase(neg.begin());

	}

	if(pos.size()==0){
		pos.push_back(neg[0]);
		neg.erase(neg.begin());
		pos.push_back(neg[0]);
		neg.erase(neg.begin());
	}

	cout<<neg.size()<<" ";
	for(int i=0;i<neg.size();i++)cout<<neg[i]<<" ";
	cout<<endl;
	cout<<pos.size()<<" ";
	for(int i=0;i<pos.size();i++)cout<<pos[i]<<" ";
	cout<<endl;
	cout<<zero.size()<<" ";
	for(int i=0;i<zero.size();i++)cout<<zero[i]<<" ";
	cout<<endl;
}