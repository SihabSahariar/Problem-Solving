#include <bits/stdc++.h>

using namespace std;

int main()
{
   int tk,count=0;cin>>tk;
   
   while(tk!=0)
   {
   	if(tk%100==0)
   	{
   		count++;
   		tk-=100;
   	}
   	else if(tk%20==0)
   	{
   			count++;
   		tk-=20;
   	}
   		else if(tk%10==0)
   	{
   			count++;
   		tk-=10;
   	}
   		else if(tk%5==0)
   	{
   			count++;
   		tk-=5;
   	}
   		else if(tk%1==0)
   	{
   			count++;
   		tk-=1;
   	}
   }
   cout<<count<<endl;
   return 0;
}