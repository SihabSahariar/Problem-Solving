#include<bits/stdc++.h>
using namespace std;
int main()
{
    double pi = 2 * acos (0.0) ;
    int t;cin>>t;
    for(int i=1;i<=t;i++)
    {
        double rad;cin>>rad;
        double AreaC=pi*rad*rad;
        double AreaSq=(2*rad)*(2*rad);
        printf("Case %d: %.2f\n",i,AreaSq-AreaC);
    }
    return 0;
}
