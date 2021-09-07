#include<bits/stdc++.h>
using namespace std;
void prn(vector<int>vec,int sz){
	for(int i=0;i<sz;i++)
    	cout<<vec[i]<< " ";
    cout<<"\n";
}
int main()
{
	int n,k;cin>>n>>k;
	vector<int>arra;
	for(int i=0;i<n;i++){
		int p;cin>>p;
		arra.push_back(p);
	}
	int left=0,right=0,dbug=0;
	for(int i=0;i<=n-1;i++){
		if(arra[i]<=k){
			arra[i] = k+1;
			left++;
		}
		else {

			break;
		} 
	}

	//prn(arra,arra.size()); 

	reverse(arra.begin(),arra.end());

	for(int i=0;i<=n-1;i++){
		if(arra[i]<=k){

			right++;
		}
		else {

			break;
		} 
	}		
	
	cout<<left+right<<endl;
	//cout<<dbug<<endl;
}