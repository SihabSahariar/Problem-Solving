#include <bits/stdc++.h>

using namespace std;


int main(){
    int t;cin>>t;
    double arra[t],sum=0;
    for(int i=0;i<t;i++)
    {
        cin>>arra[i];
        sum+=arra[i];
    }
    printf("%.12lf\n",sum/t);
}