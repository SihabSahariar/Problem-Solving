//L - 05: Count of an Element in Sorted array | Binary Search Algorithm
#include<bits/stdc++.h>
using namespace std;
int bs_first_occur(int arra[],int val,int size)
{
	int ans = -1;
	int low =0, high = size-1;
	while(low<=high){
		int mid = (high-low)+low/2;
		if(arra[mid] == val){
			ans = mid;
			high = mid-1;
		}
		else if(arra[mid]>val)high = mid-1;
		else low = mid+1;

	}
	return ans;
	//cout<<"First occurence of "<<val<<" is at index - "<<ans<<endl;
}


int bs_last_occur(int arra[],int val,int size)
{
	int low = 0, high = size-1;
	int ans = -1;
	while(low<=high){
		int mid = (high-low)+low/2;
		if(arra[mid] == val){
			ans = mid;
			low = mid+1;
		}

		else if(arra[mid]<val){
			low = mid+1;
		}
		else high = mid-1;
	}
	return ans;
	//cout<<"Last occurence of "<<val<<" is at index - "<<ans<<endl;
}

int main()
{
	int arra[] = {3,3,3,3,3,77,88,90,123,123,123,456,789};
	int size = sizeof(arra)/sizeof(arra[0]);
	int start = bs_first_occur(arra,3,size);
	int end = bs_last_occur(arra,3,size);
	cout<<"Count of "<<3<<" is "<<end-start+1<<endl;
}
