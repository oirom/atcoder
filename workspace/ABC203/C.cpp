#include <bits/stdc++.h>
using namespace std;

int main() {

  long long n, k;
  cin >> n >> k;

  vector<pair<long long, long long>> ab(n);

  for (int i = 0; i < n; i++) cin >> ab[i].first >> ab[i].second;

  sort(ab.begin(), ab.end());

  for (int i = 0; i < n; i++) {
    if (ab[i].first <= k) k += ab[i].second;
  }

  cout << k << endl;

  return 0;
}