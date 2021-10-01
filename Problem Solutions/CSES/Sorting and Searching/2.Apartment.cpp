#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
    int n,m,k;cin>>n>>m>>k;
    long long applicants[n], apartment[m];
    for(int i =0;i<n;i++)cin>>applicants[i];
    for(int i =0;i<m;i++)cin>>apartment[i];
    sort(applicants,applicants+n);
    sort(apartment,apartment+m);

    long long i=0,j=0,cnt=0;
    while(i<n && j<m){
       if(abs(applicants[i]-apartment[j])<=k)
       {
           i++;j++;
           cnt++;
       }
       else if((applicants[i]-apartment[j])>k)
       {
           j++;
       }
       else i++;
   }
   cout<<cnt;
   return 0;
}

 