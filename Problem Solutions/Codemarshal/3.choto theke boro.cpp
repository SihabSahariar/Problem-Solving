#include<bits/stdc++.h>
using namespace std;
int main()
{
//    string l;
//    cin>>l;
//    transform(l.begin(), l.end(), l.begin(), ::toupper);
//    cout<<l;

    int t;cin>>t;
    getchar();
    for(int i=1;i<=t;i++)
    {
        char name[100];
        gets(name);
        int len=strlen(name);
        printf("Case %d: ",i);
        for(int i=0;i<len;i++)
            printf("%c",toupper(name[i]));
        cout<<endl;
    }

}

