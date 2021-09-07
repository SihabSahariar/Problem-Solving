#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
int x,y,sum,digit,counter(0),temp(0);
cin>>x>>y;
 
while(x--){
 cin>>sum;
 int digits = 0;
 while (sum != 0) {
 digit=sum%10;
 sum /= 10;
 if(digit==4 || digit ==7)
 temp++;
 }
 if(temp<=y)
 counter++;
 
temp=0;
 
}
cout<< counter <<endl;
}