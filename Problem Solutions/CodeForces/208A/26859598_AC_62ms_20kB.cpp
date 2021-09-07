#include <bits/stdc++.h>

using namespace std;


int main()
{
    string str;
    cin>>str;
    int pos=str.find("WUB");
    while(pos!=-1)
    {
        str.replace(pos,3," ");
        pos=str.find("WUB");
    }
    cout<<str<<endl;
     
}

