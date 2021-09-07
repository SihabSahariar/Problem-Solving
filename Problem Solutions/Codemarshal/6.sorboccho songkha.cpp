#include<bits/stdc++.h>
using namespace std;
void cpc(){
	#ifndef io
		freopen("i.txt","r",stdin);
		freopen("o.txt","w",stdout);
	#endif	
}
int main()
{
	//cpc();
    int t;cin>>t;
    for(int j=1;j<=t;j++)
    {
        int x[3];
        for(int i=0;i<3;i++)
            cin>>x[i];
        sort(x,x+3);
        cout<<"Case "<<j<<": "<<x[2]<<endl;
    }
    return 0;
}
