#include<bits/stdc++.h>
using namespace std;
//
//L - 07: Find four elements that sum to a given value 
void find(int arra[],int size,int sum) //o(n^2)
{
	for(int i=0;i<size;i++){

		for(int k=i+1;k<size;k++)
		{
			unordered_set<int>lst;
			for(int j=k+1;j<size;j++){
				int s = arra[i]+arra[j]+arra[k];
				int diff = sum-s;
				if(lst.find(diff)!=lst.end()){
					cout<<"("<<arra[i]<<","<<arra[j]<<","<<diff<<","<<arra[k]<<")"<<endl;
				}
				else{
					lst.insert(arra[j]);
				}

			}
		}
	}


}



int main()
{
	int arra[] = {1,2,4,7,3,0};
	int sum = 10; 
	sort(arra,arra+6);
	int size = 6;
	find(arra,size,sum);
}