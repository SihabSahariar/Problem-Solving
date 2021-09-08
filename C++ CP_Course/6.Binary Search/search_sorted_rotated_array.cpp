#include <bits/stdc++.h>
//L - 07: Find an Element in Rotated Sorted Array | Binary Search Algorithm 
using namespace std;

int binary_search(int arra[],int low, int high, int val){
    while(low<=high){
        int mid = (high+low)/2;
        if(arra[mid] == val)return mid;
        else if(arra[mid]>val) high = mid-1;
        else low = mid+1;
    }
    return -1; 
}

int min_index(int arra[],int low,int high){
    while(low<=high){
        int mid = high+low/2;
        if(mid>=1 && arra[mid]<arra[mid-1])return mid;
        else if(arra[low]>arra[mid]) high = mid-1; 
        else low = mid+1;
    }
    return 0;
}

int main()
{
   int t;cin>>t;
   int arra[t+3];
   for(int i=0;i<t;i++)cin>>arra[i];
   int val;cin>>val;
   int mn = min_index(arra,0,t-1);
   cout<<mn<<endl;
   cout<<max(binary_search(arra,0,mn-1,val),binary_search(arra,mn,t-1,val))<<endl;
   
   return 0;
}