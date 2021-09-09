#include <bits/stdc++.h>
//L - 09: Find Cil of an Element in a Sorted Array | Binary Search Algorithm

using namespace std;

int binary_search(int arra[],int low, int high, int val){
    int ans = -1, bound = high;
    while(low<=high){
        int mid = (high+low)/2;
        if(arra[mid] == val){
            ans = mid;
            break;
        }
        else if(arra[mid]>val){
            high = mid-1;
        }
        else {
            ans = mid+1;
            low = mid+1;
            
        }
    }
    if(ans>bound) return -1;
    else return ans;
}

int main()
{
    int arra[] = {1, 2, 8, 10, 10, 12, 19};
    int n = sizeof(arra)/sizeof(arra[0]);
    int val = 33;
    int ans = binary_search(arra,0,n-1,val);
    if(ans==-1) cout<<"Not Found\n";
    else cout<<"Index : "<<ans<<" Element : "<<arra[ans]<<endl;
   
   return 0;
}