#include <bits/stdc++.h>
using namespace std;

long long A, B;
// dp[i][j || (d < D)][k]
// i : 何桁目か
// j : N未満か
// k : ４、９は今まであったか
long long dp[100][2][2];

long long solve(const string &s) {

    const int L = s.size();

    fill( ( long long * )dp, ( long long * )dp + sizeof( dp ) / sizeof( long long ), 0 );

    // 桁数ぶん回す
    dp[0][0][0] = 1;
    for (int i = 0; i < s.size(); i++) {
        const int D = s[i] - '0';
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                for (int d = 0; d <= (j ? 9 : D); d++){
                    dp[i + 1][j || (d<D)][k || d==4 || d==9] += dp[i][j][k];
                }
            }
        }
    } 
    return dp[L][0][1] + dp[L][1][1];
}

int main() {

    cin >> A >> B;
    
    //memset(dp, 0, sizeof(dp));

    cout << solve(to_string(B)) - solve(to_string(A-1)) << endl;

    return 0;
}