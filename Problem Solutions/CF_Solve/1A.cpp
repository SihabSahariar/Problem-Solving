#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,y,n;
    cin>>x>>y>>n;
    long long int a;
    long long int b;
    if(x%n==0)a=x/n;
    else a=x/n+1;
    if(y%n==0)b=y/n;
    else b=y/n+1;
    long long int total=a*b;
    cout<<total<<endl;

}
