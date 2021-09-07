#include<bits/stdc++.h>
#include<string.h>
#define w(x) int x;cin>>x;while(x--)
#define PI  3.14159265358979323846 
using namespace std;
int main()
{
 


    w(x)
    {
        string t;
        cin>>t;
        int len=t.length();
        int pos=(int)t[len-1];
     
        bool a=pos%2==0?true:false;
        if(a==true)
            cout<<"even"<<"\n";
        else
            cout<<"odd"<<"\n";
    }
}
