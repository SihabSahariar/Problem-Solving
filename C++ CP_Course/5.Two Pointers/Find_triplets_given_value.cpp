#include<bits/stdc++.h>
using namespace std;
//L - 06: Find a triplet that sum to a given value

void find1(int arra[],int s,int sum) // O(n^3)
{
	for(int i = 0;i<s;i++)
	{
		for(int j = i+1;j<s;j++){
			for(int k = j+1;k<s;k++)
			{
				if(arra[i]+arra[j]+arra[k]==sum){
					cout<<"("<<arra[i]<<","<<arra[j]<<","<<arra[k]<<")"<<endl;
				}
			}	
		}
	}
}

void find(int arra[],int size,int sum) //o(n^2)
{
	for(int i=0;i<size;i++){

		unordered_set<int>lst;
		for(int j=i+1;j<size;j++){
			int s = arra[i]+arra[j];
			int diff = sum-s;
			if(lst.find(diff)!=lst.end()){
				cout<<"("<<arra[i]<<","<<arra[j]<<","<<diff<<")"<<endl;
			}
			else{
				lst.insert(arra[j]);
			}

		}
	}


}



int main()
{
	int arra[] = {1,2,4,6,3,0};
	int sum = 7; 
	int size = 6;
	find(arra,size,sum);
}