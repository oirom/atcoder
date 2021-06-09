#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;
  vector<string> a(n);
  map<string, long long> m;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    m[a[i]]++;
  }

  sort(a.begin(), a.end());
  a.erase(unique(a.begin(), a.end()), a.end());

  long long ans = 0;
  for (int i = 0; i < (int)a.size(); i++) {
    if (m[a[i]] < stoi(a[i])) ans += m[a[i]];
    //cout << ans << endl;
  }

  for (int i = 0; i < (int)a.size(); i++) {
    if (m[a[i]] > stoi(a[i])) ans += m[a[i]] - stoi(a[i]);
  }

  cout << ans << endl;

  return 0;
}
