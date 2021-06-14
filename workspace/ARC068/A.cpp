#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, m;
  cin >> n >> m;
  vector<vector<int>> G(n+10);
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    G[a].push_back(b);
    G[b].push_back(a);
  }

  for (auto from : G[1]) {
    for (auto to : G[from]) {
      if (to == n) {
        cout << "POSSIBLE" << endl;
        return 0;
      }
    }
  }

  cout << "IMPOSSIBLE" << endl;

  return 0;
}
