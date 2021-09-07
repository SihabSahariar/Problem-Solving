#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t;cin>>t;
   int a[t];
   for(int i=0;i<t;i++)cin>>a[i];
   
   int ch=0,bi=0,ba=0;
   for(int i=0;i<t;i++)
   {
      if(i==0 || i==3 || i==6 || i==9 || i==12 || i==15 || i==18 ||i==21 || i==24 || i==27) ch+=a[i];
       
       else if(i==1 || i==4 || i==7 ||i==10 || i==13 || i==16 || i==19 || i==22 || i==25) bi+=a[i];
       
       else if(i==2 || i==5 || i==8 ||i==11 || i==14 || i==17 || i==20 || i==23 || i==26) ba+=a[i];
   }
   int p=max(ch,bi);
   int res=max(p,ba);
  // cout<<p<<" "<<res;
  if(res==ch)cout<<"chest\n";
  else if(res==bi)cout<<"biceps\n";
  else cout<<"back\n";
   return 0;
}