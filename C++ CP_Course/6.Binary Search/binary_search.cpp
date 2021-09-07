#include<bits/stdc++.h>
using namespace std;
//L - 02: Binary Search | Binary Search Algorithm

bool binary_search(int arra[],int key,int size)
{
		int low = 0, high =size-1;
		while(low<=high){
			int mid = (high-low)+low/2;
			if(arra[mid] == key){
				return true;
			}

			else if(arra[mid]>key) high = mid-1;
			else low = mid+1;
		}

		return false;
}



int main()
{
	int arra[] = {56,22,6,378,2,7,100,90};
	int size = sizeof(arra)/sizeof(arra[0]);
	sort(arra,arra+size);

	bool result  = binary_search(arra,10,size);

	cout<<result<<endl;
}