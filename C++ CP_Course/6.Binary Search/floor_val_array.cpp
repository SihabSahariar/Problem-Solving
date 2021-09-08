#include <bits/stdc++.h>
//L - 08: Find Floor of an Element in a Sorted Array | Binary Search Algorithm

using namespace std;

int binary_search_floor(int arra[],int low, int high, int val){
    int ans = INT_MAX;
    while(low<=high){
        int mid = (high+low)/2;
        if(arra[mid] == val){
            ans = arra[mid];
            break;
        }
        else if(arra[mid]>val){
            high = mid-1;
        }
        else {
            ans =arra[mid];
            low = mid+1;
            
        }
    }
    return ans;
}

int main()
{
   int t;cin>>t;
   int arra[t+3];
   for(int i=0;i<t;i++)cin>>arra[i];
   int val;cin>>val;
   int ans = binary_search_floor(arra,0,t-1,val);
   cout<<ans<<endl;
   
   return 0;
}