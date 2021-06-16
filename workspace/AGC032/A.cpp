#include<bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;
  vector<int> b(n);
  for (int i = 0; i < n; i++) cin >> b[i];

  vector<int> ans;
  int t = b.size();
  while (t>0) {
    int cnt = -1;
    for (int i = 0; i < (int)b.size(); i++) {
      if (b[i] == i+1) cnt = i;
    }
    if (cnt == -1) { cout << -1 << endl; return 0; }
    b.erase(b.begin() + cnt);
    ans.push_back(cnt);
    t--;
  }
  
  reverse(ans.begin(), ans.end());
  for (auto a : ans) cout << a + 1 << endl;

  return 0;
}