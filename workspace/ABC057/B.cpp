#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, m;
  cin >> n >> m;
  vector<pair<signed long long, signed long long>> ab(n), cd(m);
  for (int i = 0; i < n; i++) cin >> ab[i].first >> ab[i].second;
  for (int i = 0; i < m; i++) cin >> cd[i].first >> cd[i].second;

  vector<int> ans(n,0);

  for (int i = 0; i < n; i++) {
    long long dist = 10000000000000000;
    for (int j = 0; j < m; j++) {
      long long tmp = abs(ab[i].first - cd[j].first) + abs(ab[i].second - cd[j].second);
      if (tmp < dist) ans[i] = j, dist = tmp;
    }
    cout << ans[i] + 1 << endl;
  }
  
  return 0;
}
