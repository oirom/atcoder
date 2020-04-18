#include <bits/stdc++.h>

using namespace std;

int main() {

    long int N, W; cin >> N >> W;

    long int v[N], w[N];
    for (int i=0; i<N; i++) cin >> v[i] >> w[i];

    long int dp[N+10][W+10];
    for (int i=0; i<=W; i++) dp[0][i] = 0;

    // 商品番号 i までの商品のうち幾つかを選び
    // 重さjを超えないようにナプサクに詰めたときの値が dp[i+1][j]
    for (int i=0; i<N; i++) {
        for (int j=0; j<=W; j++) {
            // dp[i+1][j] = dp[i][j-w[i]]+v[i]
            // 商品 i をナプサクに加えてもナプサク容量が j を超えないような
            // dp[i][] を選んでいる
            if (j>=w[i]) dp[i+1][j] = max(dp[i][j-w[i]]+v[i], dp[i][j]);
            else dp[i+1][j] = dp[i][j];
        }
    }

    cout << dp[N][W] << endl;

    return 0;
}