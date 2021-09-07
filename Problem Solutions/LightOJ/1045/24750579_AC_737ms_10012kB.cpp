#include <bits/stdc++.h>
#define ll long long
#define S 1000003
using namespace std;
double cuS[S];
void cumulativeSum(){
    cuS[1] = log((double)1);
    for(int i = 2; i < S; i++){
        cuS[i] = cuS[i-1] + log((double)i);
    }
}
 
int main(){
    int  t, cs = 0, n, base;
    cumulativeSum();
    cin>>t;
    while(t--){
        cin>>n>>base;
        double value = cuS[n];
        value /= log((double)base);
        ll ans = value;
        ans += 1;
        printf("Case %d: %lld\n", ++cs, ans);
    }
    return 0;
}