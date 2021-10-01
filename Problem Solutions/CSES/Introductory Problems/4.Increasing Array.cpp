#include<bits/stdc++.h>
#define int long long
using namespace std;

// 5
// 3 2 5 1 7

int32_t main()
{
    int t;cin>>t;
    int arra[t];
    int cnt=0;
    for(int i=0;i<t;i++){
        cin>>arra[i];
    }
    
    for(int i=0;i<t-1;i++){
        if(arra[i]>arra[i+1])
        {
            cnt+=abs(arra[i]-arra[i+1]);
            arra[i+1] = arra[i]; 
        }
    }
    
    // for(int i=0;i<t;i++)cout<<arra[i]<<" ";
    // cout<<endl;
    
    cout<<cnt<<endl;
    
}