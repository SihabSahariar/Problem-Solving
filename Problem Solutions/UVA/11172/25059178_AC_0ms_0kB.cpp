#include<bits/stdc++.h>
using namespace std;
int main() {
int a,b,n;
scanf("%d",&n);
if(n<15)
{
for(int k=1;k<=n;k++)
{
	scanf("%d %d",&a,&b);
	if(a>b){
		printf(">\n");
	}
	else if(a<b){
		printf("<\n");
	}
	else{
		printf("=\n");
	}
}
}

	return 0;
}