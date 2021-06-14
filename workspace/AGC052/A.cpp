#include <bits/stdc++.h>
using namespace std;

int solve() {

  int n;
  cin >> n;
  vector<string> s(3);
  for (int i = 0; i < 3; i++) cin >> s[i];

  for (int i = 0; i < n; i++) cout << 0;
  for (int i = 0; i < n; i++) cout << 1;
  cout << 0 << endl;

  return 0;
}

int main() {

  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    solve();
  }
  return 0;
}