#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    vector<int>jor;
    vector<int>bijor;
    for(int i=1;i<=t;i++){
        if(i%2==0)jor.push_back(i);
       else bijor.push_back(i);
       
    }
    //if(abs(jor[jor.size()-1)]-bijor[bijor.size()-1])
    if(t==2 or t==3)
        cout<<"NO SOLUTION\n";
    else
    {
        for(int i=0;i<jor.size();i++)cout<<jor[i]<<" ";
        for(int i=0;i<bijor.size();i++)cout<<bijor[i]<<" ";   
        cout<<endl;
    }
}