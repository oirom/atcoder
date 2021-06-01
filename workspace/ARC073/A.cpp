#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, t;
  cin >> n >> t;
  vector<long long> v(n+10, 0);
  for (int i = 1; i <= n; i++) cin >> v[i];

  long long ans = 0;
  for (int i = 0; i < n; i++) {
    if (v[i+1] - v[i] >= t) ans += t;
    else ans += v[i+1] - v[i];
  }

  cout << ans + t<< endl;

  return 0;
}