#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int arra[5];
    for(int i=0;i<5;i++)
        cin>>arra[i];
    sort(arra,arra+5);
    int min=arra[0]+arra[1]+arra[2]+arra[3];
    int max=arra[1]+arra[2]+arra[3]+arra[4];
    cout<<min<<" "<<max<<endl;

}
