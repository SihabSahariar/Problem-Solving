#include<bits/stdc++.h>
#define MAX 200
using namespace std;
 
 
int main() 
{
	int n, arra[MAX];cin >> n;
	for (int i = 0; i<n; i++) 
		cin >> arra[i];
	sort(arra, arra + n);
	for (int i = n - 1; i>0; i--) 
	{
		if (arra[i - 1] == arra[i] || arra[n - 1] % arra[i] != 0) 
		{
			cout << arra[n - 1] << " " << arra[i];
			break;
		}
	}
	return 0;
}