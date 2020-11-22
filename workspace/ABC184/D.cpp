#include <bits/stdc++.h>
typedef long int li;
typedef long long ll;
using namespace std;
using Graph = vector<vector<ll>>;

double dp[101][101][101];

int main() {

    int a, b, c;
    cin >> a >> b >> c;

    for (int i=99; i>=0; i--) {
        for (int j=99; j>=0; j--) {
            for (int k=99; k>=0; k--) {
                if (i+j+k==0) continue;
                double now = 0;
                now += dp[i+1][j][k]*i;
                now += dp[i][j+1][k]*j;
                now += dp[i][j][k+1]*k;
                dp[i][j][k] = now/(i+j+k) + 1;
            }
        }
    }

    double ans = dp[a][b][c];
    printf("%.10f\n", ans);
    
    return 0;
}