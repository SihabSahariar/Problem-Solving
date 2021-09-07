#include <bits/stdc++.h>
using namespace std;

int main() {
    long int t;
    cin >> t;
    long int i, j, b, d,k;
    string str;

    for (i=1; i<=t; i++) {
        cin>>str;
        cin >> b;
        d = 0;
        if (str[0]=='-') 
        	j=1;
        else 
        	j=0;
     
        for (long len = str.length(); j<len; j++) {


            d = d*10 + (str[j]-'0');
            d = d%b;
        }

        cout << "Case " << i << ": ";
        if (d) 
        	cout << "not divisible" <<"\n";
        else 
        	cout << "divisible" <<"\n";

    }
}