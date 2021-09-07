#include<bits/stdc++.h>
using namespace std;
int main(){
 
    int n,x = 0;
    string str;
    cin >>  n;
    while(n--){
        cin >> str;
        if(str[1] == '+')x++;
        else x--;
    }
    cout << x << endl;
    return 0;
}