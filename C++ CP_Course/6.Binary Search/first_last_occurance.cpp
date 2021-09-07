//L - 04: First and Last Occurrence of an Element|
#include<bits/stdc++.h>
using namespace std;

void bs_first_occur(int arra[],int val,int size)
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

	cout<<"First occurence of "<<val<<" is at index - "<<ans<<endl;
}


void bs_last_occur(int arra[],int val,int size)
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

	cout<<"Last occurence of "<<val<<" is at index - "<<ans<<endl;
}


int main()
{
	int arra[] = {3,77,88,90,123,123,123,456,789};
	int size = sizeof(arra)/sizeof(arra[0]);
	bs_first_occur(arra,123,size);
	bs_last_occur(arra,123,size);


}