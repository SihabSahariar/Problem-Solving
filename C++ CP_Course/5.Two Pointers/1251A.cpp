#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string str;cin>>str;
        set<char>s;
        for(int i=0;i<str.size();i++){
            if(str[i]==str[i+1])i++;
            else s.insert(str[i]);
        }
            
        for(auto i:s)cout<<i;
        cout<<endl;
    }
        
        
}
