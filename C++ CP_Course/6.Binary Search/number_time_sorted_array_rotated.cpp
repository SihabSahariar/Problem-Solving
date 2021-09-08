//L - 06: Number of Time a Sorted Array is Rotated | Binary Search Algorithm
#include<bits/stdc++.h>
using namespace std;

int no_of_rot(int arra[],int size){
	int low = 0 , high = size-1 , ans = 0;
	while(low<=high){
		int mid = (high-low)+low/2;
		if(mid>1 && arra[mid]<arra[mid-1]) // will give error -> arra[mid]<arra[mid+1] && arra[mid]<arra[mid-1]
		{
			ans = mid;
			break;
		}
		else if(arra[low]>arra[mid]) high = mid-1; 
		else low = mid+1;
		
	}
	return ans;
}

int main()
{
	int arra[] = {6 ,13 ,20, 23, 32 ,40, 41 ,43, 45, 46, 55 ,65 ,67, 2};
	int size = sizeof(arra)/sizeof(arra[0]);

	int result = no_of_rot(arra,size);
	cout<<result<<endl;

}

//https://practice.geeksforgeeks.org/problems/rotation4723/