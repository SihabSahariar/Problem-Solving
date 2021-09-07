#include<bits/stdc++.h>
int num1(char x)
{
    if(x=='2') return 2;
    else if(x=='3') return 3;
    else if(x=='4') return 4;
    else if(x=='5') return 5;
    else if(x=='6') return 6;
    else if(x=='7') return 7;
    else if(x=='8') return 8;
    else if(x=='9') return 9;
    else if(x=='T') return 10;
    else if(x=='J') return 11;
    else if(x=='Q') return 12;
    else if(x=='A') return 13;
    else return 0;
}
int num2(char x)
{
    if(x=='D') return 4;
    else if(x=='C')return 3;
    else if(x=='S')return 2;
    else if(x=='H')return 1;
    else return -1;
}
using namespace std;
int main()
{
    bool give=false;
    string tablee_ache;
    cin>> tablee_ache;
    int t1=num1(tablee_ache[0]);
    int t2=num2(tablee_ache[1]);
    getchar();
    for(int i=0;i<5;i++)
    {
        string hate_ache;
        cin>>hate_ache;
        int h1=num1(hate_ache[0]);
        int h2=num2(hate_ache[1]);
        if(t1==h1 || t2==h2)
            give=true;
//            cout<<h1<<" "<<h2<<endl;
    }
    if(give==true)cout<<"YES"<<"\n";
    else if(give==false) cout<<"NO"<<"\n";

}
