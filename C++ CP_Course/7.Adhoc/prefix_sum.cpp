//L - 02: Prefix_sum | Ad-hoc | Competitive Programming
#include<bits/stdc++.h>
using namespace std;

/*
	n = 5
	index : 0  1  2  3  4
	elem  : 2  4  1  5  10
	prefix: 2  6  7  12 22

*/

int main()
{
	int arra[] = {2,4,1,5,10};
	for(int i=1;i<5;i++){
		arra[i]+=arra[i-1];
	}

	for(int i=0;i<5;i++)cout<<arra[i]<<" ";
}