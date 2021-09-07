#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t;cin>>t;
   while(t--)
   {
    	int n, rev = 0, r;
    	cin>>n;
    	while (n != 0) {
	        r = n % 10;
	        rev = (rev * 10) + r;
	        n /= 10;
		 }
    cout<<rev<<endl;
   }
   
   return 0;
}