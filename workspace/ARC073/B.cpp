#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  int n;
  cin >> s >> n;
  vector<int> l(n+10), r(n+10);
  for (int i = 1; i <= n; i++) cin >> l[i] >> r[i];
  
  vector<int> id((int)s.size()+10,0), tmp;
  for (int i = 1; i <= (int)s.size(); i++) id[i] = i;
  tmp = id;

  for (int i = 1; i <= n; i++) {
    for (int j = l[i]; j <= r[i]; j++) {
      id[r[i]-j+l[i]] = tmp[j];
    }
    tmp = id;
  }

  for (int i = 1; i <= (int)s.size(); i++) {
    cout << s[id[i]-1];
  } cout << endl;

  return 0;
}