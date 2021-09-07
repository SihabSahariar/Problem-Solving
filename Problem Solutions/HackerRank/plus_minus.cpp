#include<bits/stdc++.h>
using namespace std;
int main()
{
    int countP=0;
    int countN=0;
    int countZ=0;
    int n;cin>>n;
    //int arra[n];
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x>0)countP++;
        else if(x<0)countN++;
        else countZ++;
    }
    printf("%.6f\n",(double)countP/n);
    printf("%.6f\n",(double)countN/n);
    printf("%.6f\n",(double)countZ/n);
    return 0;
}
