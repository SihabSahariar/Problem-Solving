#include<bits/stdc++.h>
using namespace std;
//L - 08: Find a triplet such that sum of two equals to third element 

void prn(int arra[],int s){

	for(int i=0;i<s;i++){
		set<int>lst;
		for(int j=i+1;j<s;j++){
			int sum = arra[i]+arra[j];
			if(lst.find(sum)!=lst.end()){
				cout<<arra[i]<<","<<arra[j]<<","<<sum<<endl;
			}
			else{
				lst.insert(arra[j]);
			}

		}
	}
}

void sum(int arra[],int s){
	for(int i=s-1;i>=0;i--){
		int s = arra[i];
		int l = 0, r = i-1;
		while(l<r){
			int sum = arra[l]+arra[r];
			if(s==sum){
				cout<<arra[l]<<","<<arra[r]<<","<<sum<<endl;
				return;
			}
			else if(sum>s)r--;
			else l++;
		}

	}
	//cout<<"NO triplet found"<<endl;


}

int main()
{
	int arra[] = {5,32,1,7,10,50,19,21,2};
	sort(arra,arra+9);
	int s = 9;
	sum(arra,s);

}