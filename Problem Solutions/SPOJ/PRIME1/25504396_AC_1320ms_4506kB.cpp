#include <bits/stdc++.h>
using namespace std;
bool seive(int n)
{

    if (n <= 1)
        return false;
    if(n<=3){
        return true;
    }
    for (int i = 2; i <=sqrt(n); i++)
        if (n % i == 0)
            return false;

    return true;
}
int main() {
    int t; cin>>t;
    while(t--){
       int m,n;
       scanf("%d %d",&m,&n);
       for (int i = m; i <= n; i++) {
           if(seive(i))std::cout << i <<endl;
       }
       cout<<endl;
    }

    return 0;
}
