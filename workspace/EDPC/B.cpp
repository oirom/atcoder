#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define LINF LLONG_MAX;

long long dp[110000];
long long n, h[110000], k;

int main() {
  
  cin >> n >> k;
  rep(i, n) cin >> h[i];

  dp[0] = 0;

  for (int i = 1; i < n; i++) {
    dp[i] = LINF;
    for (int j = 1; j <= k; j++) {
      if (i - j >= 0)
        dp[i] = min(dp[i], dp[i - j] + abs(h[i] - h[i - j]));
    }
  }

  cout << dp[n - 1] << endl;

  return 0;
}