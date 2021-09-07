#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std ;

void fast()
{
 cin.sync_with_stdio(0);
 cin.tie(0);
}
ll gosagu ( ll a , ll b)
{
     return ( (b==0)?a:(gosagu(b,a%b)) ) ;
}

int main(){

   int tc , i, j, k;
   string s ; cin >> tc;

   while ( tc){
          getline(cin,s);
      
       if( s.length() <= 1){
            continue ;
       }
     
       tc--;
          ll a ,temp ;
          a = temp = 0;
       vector < ll > arra ;
          for ( i = 0 ; i < s.length() ; i++)
          if( s[i] >= '0' && s[i] <= '9' ){
                 temp = temp * 10 + ( s[i] - '0' );
          }
          else{
               // cout << temp << endl;
                if( temp > 0)
                arra.pb ( temp );
                temp = 0;
          }

         if( temp > 0)
         arra.pb ( temp );
        
        //cout << arra.size() << endl;
        for ( i = 0 ; i < arra.size() ; i++)
        for ( j = i+1 ; j < arra.size() ; j++)
        a = max( a , gosagu(arra[i],arra[j])) ;
       cout << a << "\n";
	//check();
   }
    return 0;
}