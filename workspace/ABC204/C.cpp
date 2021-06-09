#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> root(2100, vector<int>(1,0));
vector<int> cnt(2100,0);
vector<bool> chk(2100, false), chk2(2100, false), tmp;
int ans;

int solve(int a) {
  if ((int)root[a].size() == 1) return 1;
  for (auto x : root[a]) {
    if (x == 0) continue;
    if (!tmp[x]) {
      tmp[x] = true;
      cnt[x] += solve(x);
    }
    chk2[x] = true;
  }
  return 1;
}

int main() {

  int n, m;
  cin >> n >> m;
  vector<int> a(m+10), b(m+10);
  for (int i = 1; i <= m; i++) {
    cin >> a[i] >> b[i];
    root[a[i]].push_back(b[i]);
  }

  ans = 0;

  for (int i = 1; i <= n; i++) root[i].push_back(i);

  for (int i = 1; i <= n; i++) {
    tmp = chk;
    solve(i);
  }

  for (int i = 1; i <= n; i++) {
    ans += cnt[i];
  }

  cout << ans << endl;

  return 0;
}
