#include<stdio.h>
int main(){

double a,b,c,d,x,y,z;
scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
if (1 <= a <= b <= c <= d <= 10000){
x = a*b;
y = b*d;
z = ( x + y ) * ( x - y ) / ( a + b + c + d );

printf("%0.3lf %0.3lf %0.3lf\n",x,y,z);

}
}
