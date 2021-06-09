#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> root(2100, vector<int>(1,0));
vector<int> cnt(2100,0);
vector<bool> chk(2100, false), chk2(2100, false), tmp;
int ans;

int main() {

  string s;
  cin >> s;
  
  int cnt = 1;
  while (s[cnt] == '9' && cnt < (int)s.size()) cnt++;
  if (cnt == (int)s.size()) cout << (int)(s[0] - '0') + (cnt - 1) * 9 << endl;
  else cout << (int)(s[0] - '0') + ((int)s.size() - 1) * 9 - 1 << endl;

  return 0;
}
