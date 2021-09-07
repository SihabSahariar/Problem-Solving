#include<bits/stdc++.h>
//Function with multiple parameter & array as parameter 
using namespace std;
void func(int arra[],int x,int y)
{
    //int a[]=arra[],b,c;
    bool l=false;
    for(int i=0;i<x;i++)
    {
        if(arra[i]==y)
        {
            l=true;
            break;
        }
    }
    if(l)cout<<"Found Y";
    else cout<<"Coudln't Found";

}
int main()
{
    int t;cin>>t;
    int p[t];
    for(int k=0;k<t;k++)
        cin>>p[k];
    int y;cin>>y;
    func(p,t,y);


}