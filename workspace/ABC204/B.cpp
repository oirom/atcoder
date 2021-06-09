#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];

  long long ans = 0;
  for (int i = 0; i < n; i++) {
    ans += max(0, a[i] - 10);
  }

  cout << ans << endl;

  return 0;
}