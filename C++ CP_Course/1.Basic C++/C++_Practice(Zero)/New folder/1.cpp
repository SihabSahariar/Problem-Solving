#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    unsigned int a;
    priority_queue<unsigned int> Q;
    cin>>n;
    for(int i = n/2;i >= 0;--i){
        scanf("%u",&a);
        Q.push(a);
    }

    n -= n/2 + 1;

    for(int i = 0;i < n;++i){
        scanf("%u",&a);
        Q.push(a);
        Q.pop();
    }

    if(n%2==0)
        printf("%u\n",Q.top());
    else{
        a = Q.top();
        Q.pop();
        printf("%.1f\n",(a + Q.top()) / 2.0);
    }

    return 0;
}
