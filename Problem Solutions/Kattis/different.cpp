#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	#ifndef kattis
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	long long int a,b;
	while((scanf("%lld%lld",&a,&b))!=EOF){
		cout<<abs(a-b)<<endl;

	}
}