#include<bits/stdc++.h>
#define pb push_back
#define ll long long
using namespace std;
int main_firstTry()
{
    ll int n;
    while(cin >> n)
    {
         for(ll i = 2;  i <= sqrt(n); i++)
        {
        if (n%i==0)
        {
            if (n/i!=i)
                cout << i << endl << n/i<< endl;
            else
                cout << i<< endl;
        }
        }
    }

    return 0;
}



int main() {
	vector<ll>check;
	ll n, k;
	cin >> n >> k;

	for (ll i = 1; i <= sqrt(n); i++) {
		if (n % i == 0) {
			ll d = n / i;
			check.push_back(i);
			if (d != i) check.push_back(d);
		}
	}
	sort(check.begin(), check.end());
	if (k > check.size()) cout << -1;
	else cout << check[k-1];
	return 0;
}
