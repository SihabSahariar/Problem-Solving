#include <stdio.h>
#include <math.h>


void main()
{
	double r;
	double sarea;
	double carea;
	double area;
	int test;

	scanf("%d", &test);

	for (int i = 1; i <= test; i++) {
		scanf("%lf", &r);
		carea = 2 * acos(0.0) * r * r;
		sarea = (2 * r) * (2 * r);
		area = sarea - carea;

		printf("Case %d: %.2lf\n",i, area);
	}


}