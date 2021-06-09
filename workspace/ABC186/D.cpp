#include <bits/stdc++.h>
using namespace std;

int main() {

  long long n, sum = 0;
  cin >> n;
  vector<long long> a(n);
  for (long long i = 0; i < n; i++) cin >> a[i], sum += a[i];

  sort(a.begin(), a.end());

  long long ans = 0;
  for (long long i = 0; i < n; i++) {
    sum -= a[i];
    ans += abs(a[i] * (n - i - 1) - sum);
    //cout << ans << endl;
  }

  cout << ans << endl;

  return 0;
}
