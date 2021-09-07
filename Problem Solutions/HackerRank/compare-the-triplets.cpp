#include<bits/stdc++.h>
using namespace std;
int main()
{
    int alice[3],bobs[3];
    //alice
    for(int i=0;i<3;i++)
        cin>>alice[i];
    //bobs
    for(int i=0;i<3;i++)
        cin>>bobs[i];
    //winner
    int a=0,b=0;
    for(int i=0;i<3;i++)
    {
        if(alice[i]>bobs[i])a++;
        else if(alice[i]<bobs[i])b++;
    }
    cout<<a <<" "<<b<<endl;
}
