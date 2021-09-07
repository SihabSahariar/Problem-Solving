#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int t;cin>>t;
    while(t--)
    {
        int k;cin>>k;
        int arra[k];
        int sum=0;
        for(int i=0;i<k;i++){
            cin>>arra[k];
            sum+=arra[k];
        };
        int p=ceil(sum*1.0/k*1.0);
        cout<<p<<endl;
    }
}
