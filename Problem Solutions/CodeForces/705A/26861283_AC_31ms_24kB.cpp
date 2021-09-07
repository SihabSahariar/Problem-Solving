#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int t;cin>>t;
    if(t==1)cout<<"I hate it"<<endl;
    else
    {
        for(int i=1;i<t;i++)
        {
                if(i%2==1)cout<<"I hate that ";
            //cout<<"that ";
            else cout<<"I love that ";
        }
        if(t%2==1)cout<<"I hate it \n";
            else cout<<"I love it \n";
    }
 
}
