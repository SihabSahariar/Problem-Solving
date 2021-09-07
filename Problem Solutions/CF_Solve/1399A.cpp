#include<bits/stdc++.h>
using namespace std;

void ojj()
{
    #ifndef oj
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}
void binod()
{
    cout<<"Binod"<<endl;
}

int main1()
{
    ojj;
    int t;cin>>t;
    bool res=true;
    while(t--)
    {
        int p;
       // int <vector> raj; 
        cin>>p;
        int arra[p];
        for(int k=0;k<p;k++)
            cin>>arra[k];
        sort(arra,arra+p);
        	//int ara[];
        
	        for(int q=0,h=0;q<p-1;q++)
	        {
	            int diff=abs(arra[q]-arra[q+1]);
	            if(diff>1)
	            {
	                res=false;
                    break;
	            }
	        }
	        if(res)cout<<"YES\n";
	        else cout<<"NO\n";
	   }
       return 0;
    }
    
    int main()
    {
        ojj;
        binod();
    }

