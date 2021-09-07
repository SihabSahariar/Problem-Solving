#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
   {
        char ch[100];
        cin>>ch;
        if(strlen(ch)<=10)cout<<ch;
        else{
            cout<<ch[0];
            int c=0;
            cout<<strlen(ch)-2;
            cout<<ch[strlen(ch)-1];



        }
        cout<<endl;
   }
}
