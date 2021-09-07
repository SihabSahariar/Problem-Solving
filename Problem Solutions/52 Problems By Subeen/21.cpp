#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T,count;
    cin>>T;
    string s;
    cin.ignore();

    while(T--)
    {
        getline(cin,s);
        reverse(s.begin(),s.end());
        cout<<s<<endl;


    }
    return 0;
}
