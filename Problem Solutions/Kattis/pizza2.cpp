#include<bits/stdc++.h>
#define PI  3.14159265358979323846
using namespace std;
int main(void)
{
	#ifndef kattis
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	double a,b;
	std::cout.precision(9);
	//while((
	scanf("%lf%lf",&a,&b);//)!=EOF){
		double oc=(pow((a-b),2.0)*PI)/(pow(a,2.0)*PI);

		if(a>=1 && b>=1 && a<=100 && b<=100)
			std::cout<< std::fixed<<oc*100<<endl;
		
	

	
}