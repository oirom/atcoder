#include <bits/stdc++.h>

#define rep(i,n) for(int i=0; i<=n; i++)
#define rep1(i,n) for(int i=1; i<=n; i++)

using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long int n; cin >> n;

    vector<long int> dp(10000000);
    rep(i,n) dp[i] = i;

    rep(i,n) {
        rep1(j,7) {
            dp[i+(int)pow(6,j)] = min(dp[i+pow(6,j)], (long int)(i+1));
            rep1(k,6) {
                dp[i+(int)pow(6,j)+(int)pow(9,k)] = min(dp[i+pow(6,j)+(int)pow(9,k)], (long int)(i+2));
            }
        }
    }

    rep(i,n) {
        rep1(j,7) {
            dp[i+(int)pow(6,j)] = min(dp[i+pow(6,j)], (long int)(i+1));
            rep1(k,6) {
                dp[i+(int)pow(6,j)+(int)pow(9,k)] = min(dp[i+pow(6,j)+(int)pow(9,k)], (long int)(i+2));
            }
        }
    }

    cout << dp[n] << "\n";

    return 0;
}