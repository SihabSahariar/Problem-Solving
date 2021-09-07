#include<bits/stdc++.h>
using namespace std;
double dp[110][110];
int main(){
    int n, m;
    int ca = 1;
    while(cin >> n && n != -1){
        cin >> m;
        memset(dp, 0, sizeof(dp));
        dp[1][1] = 1;
        for(int i = 2; i <= n; i++){
            for(int j = 1; j <= m; j++){
                dp[i][j] = dp[i - 1][j] * (j * 1.0/ m) + dp[i - 1][j - 1] * (m - j + 1)*1.0/m;
            }
        }
        double sum = 0;
        for(int i = 1; i < m; i++){
            sum += dp[n][i];
        }
        printf("Case %d: %.7lf\n",ca++, sum);
    }
    return 0;
}