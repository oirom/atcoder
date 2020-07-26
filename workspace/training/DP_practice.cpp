#include <bits/stdc++.h>

#define rep(i,n) for(int i=0; i<n; i++)

using namespace std;

int main() {

    long int N, W; cin >> N >> W;

    long int value[110], weight[110];
    rep(i,N) cin >> value[i] >> weight[i];

    long int dp[110][10010];
    for (int w=0; w<=W; w++) dp[0][w] = 0;

    for (int i=0; i<N; i++) {
        for (int w=0; w<=W; w++) {
            if (w >= weight[i]) dp[i+1][w] = max(dp[i][w-weight[i]] + value[i], dp[i][w]);
            else dp[i+1][w] = dp[i][w];
        }
    }

    cout << dp[N][W] << endl;

    return 0;
}