#include<bits/stdc++.h>
using namespace std;
//L - 03: Binary Search(Reverse Sorted) | Binary Search Algorithm

bool reversed_binary_search(int arra[],int key,int size)
{
		int low = 0, high =size-1;
		while(low<=high){
			int mid = (high-low)+low/2;
			if(arra[mid] == key){
				return true;
			}

			else if(arra[mid]>key) low = mid+1;
			else high = mid-1;
		}

		return false;
}



int main()
{
	int arra[] = {100,90,76,33,54,44,10,2,1};
	int size = sizeof(arra)/sizeof(arra[0]);
	//sort(arra,arra+size);

	bool result  = reversed_binary_search(arra,11,size);

	cout<<result<<endl;
}