#include<bits/stdc++.h>
using namespace std;
//
//L - 04: Find the closest pair from two sorted arrays which is closest to target
int main()
{

	int arra1[] = {1,3,4,5,7,8,9};
	int arra2[] = {10,20,30,40};
	int target = 50;

	int in1,in2,l,r;
	l = 0;
	r = 3; // m-1

	int d = INT_MAX;
	int pair[2];

	while(l<7 && r>=0){

		int sum = arra1[l] + arra2[r];
		int dif = abs(sum-target);
		if(dif<d){
			d = dif;
			in1 = l;
			in2 = r;
		}

		else if(sum<target)l++;
		else r--;
	}

	cout<<arra1[in1]+arra2[in2]<<"-> ("<<arra1[in1]<<","<<arra2[in2]<<")"<<endl;

}