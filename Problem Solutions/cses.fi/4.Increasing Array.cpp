#include<bits/stdc++.h>
using namespace std;

// 5
// 3 2 5 1 7

int main()
{
    int t;cin>>t;
    int arra[t];
    int cnt=0;
    for(int i=0;i<t;i++){
        cin>>arra[i];
    }
    
    for(int i=0;i<t;i++){
        for(int j=0;j<t;j++){
            if(arra[i-1]>arra[j])
            {
                cnt++;
            }
            
        }
    }
    
    // for(int i=0;i<t;i++)cout<<arra[i]<<" ";
    // cout<<endl;
    
    cout<<cnt<<endl;
    
}