//L - 03: Difference Array/Update Range Query Algo | Ad-hoc | Competitive Programming
#include<bits/stdc++.h>
using namespace std;

/* Manual Output

A =  1 1 2 3

Q1 = 2 2 3 4 
Q2 = 2 6 7 8
Q3 = 5 9 10 11

Ans -> Q3


Analysis:

t= 4
----------------------------
index  | 0 | 1 | 2 | 3 | 4 |
----------------------------
A[]    | 1 | 1 | 2 | 3 |
----------------------------
Diff[] | 0 | 0 | 0 | 0 | 0 |
----------------------------

For Query 1 : L = 0 ,R = 3, V = 1
			  Diff[L]   += V -> Diff[0]+ = 1 -> Diff[0] =  1
			  Diff[R+1] -= V -> Diff[4]- = 1 -> Diff[4] = -1
			  -----------------------------
			  Diff[] | 1 | 0 | 0 | 0 | -1 |
			  -----------------------------

For Query 2 : L = 1 ,R = 3, V = 4
			  Diff[L]   += V -> Diff[1] += 4 -> Diff[1] = 4
			  Diff[R+1] -= V -> Diff[4] -= 4 -> Diff[4] = -5
			  ----------------------------
			  Diff[] | 1 | 4 | 0 | 0 |-5 |
			  ----------------------------

For Query 3 : L = 0 ,R = 3, V = 3
			  Diff[L]   += V -> Diff[0] += 3 -> Diff[0] = 4
			  Diff[R+1] -= V -> Diff[4] -= 3 -> Diff[4] = -8
			  -----------------------------
			  Diff[] | 4 | 4 | 0 | 0 | -8 |
			  -----------------------------

So, QSUM(Diff) = [4, 8, 8, 8, 0]
Now, A[i] += QSUM(Diff)[i]
	A[] + Diff[] = [1, 1, 2, 3] + [4, 8, 8, 8] = [5, 9, 10, 11]

Answer : [5, 9, 10, 11]

*/ 


void prnt_array(int arra[],int size){
	for(int i=0;i<size;i++)cout<<arra[i]<<" ";
	cout<<endl;
}


int main()
{
	int t;cin>>t;
	int arra[t+3] = {0};
	int diff[t+3] = {0};
	for(int i=0;i<t;i++)cin>>arra[i];

	//Query 
	int q;cin>>q;
	while(q--){
		int l,r,v;cin>>l>>r>>v;
		diff[l]+=v; //
		diff[r+1]-=v;
		//prnt_array(diff,t+1);
	}

	for(int j=1;j<t;j++) diff[j]+=diff[j-1];
	for(int k=0;k<t;k++) arra[k]+=diff[k];
	for(int p=0;p<t;p++) cout<<arra[p]<<" ";
	cout<<endl;
}


