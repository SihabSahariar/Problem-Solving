#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str,wsp="",strcp;
    
    while(getline(cin,str))
    {
        if(str == "DONE")break;
        
        for(int i=0; i<str.size(); i++)
        {
            if(str[i]>='A'&& str[i]<='Z' ||str[i]>='a'&& str[i]<='z')
                wsp += toupper(str[i]);
        }
    
        strcp = wsp;
        reverse(wsp.begin(), wsp.end());
        if(wsp == strcp)
          cout<<"You won't be eaten!\n";
        else
          cout<<"Uh oh..\n";
          
         wsp = "", strcp="";
    }

}