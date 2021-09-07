#include <bits/stdc++.h>
#define ll long long  
using namespace std;
double x[100],y[100];
double dis(int i, int j){
    return sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
}
int main(){
    
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    ll sum=0;
    for(ll i=0;i<n-1;i++)
        sum=sum+arr[i]*arr[i+1];

    cout<<sum<<endl;

    return 0;
}