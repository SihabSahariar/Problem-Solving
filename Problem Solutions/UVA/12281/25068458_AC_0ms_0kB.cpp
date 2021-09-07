#include <bits/stdc++.h>
using namespace std;

int main() {
	long long f[50] = {1, 2};
	for(int i = 2; i < 50; i++)
		f[i] = f[i-1] + f[i-2];
	int t, cases = 0, N, x;
	cin>>t;
	while(t--) {
		cin>>N;
		long long r = 1;
		for(int i = 0; i < N; i++) {
			cin>>x;
			int cnt = 0;
			for(int j = 49; j >= 0; j--)
				if(x >= f[j])
					x -= f[j], cnt++;
			r= r*cnt;
		}
		printf("Case %d: %lld\n", ++cases, r);
	}
	return 0;
}