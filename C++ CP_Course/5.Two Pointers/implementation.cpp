#include<bits/stdc++.h>
using namespace std;
//Using Two Pointer Technique, we need a sorted array.
//Lecture 1
int main()
{
	//Reverse an array
	int n=10;
	int arra [n] = {3,41,5,-3,0,88,12,-12,66,99};
	sort(arra,arra+n);
	//-3 , 0 ,3 , 5, 41 , 66, 88 , 99

	// 41,5,3,0,-3 (Expected Output)
	for(int i=0,j=n-1;i<=n/2;i++,j--){
		int temp = arra[i];
		arra[i] = arra[j];
		arra[j] = temp;
	} 


	for(int t=0;t<n;t++)cout<<arra[t]<<" ";
}