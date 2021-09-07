#include <bits/stdc++.h>
using namespace std;


int main () {
	int t, n, m, k;
	cin >> t;
	
	while (t--) {
		cin >> n >> m >> k;
		int p = n / k;
		if (p >= m) {
			cout << m << endl;
			continue;
		} else {
			m -= p;
			int o = (m - 1) / (k - 1) + 1;
			cout << p - o << endl;
		}
	}		
	return 0;
}