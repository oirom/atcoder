#include<bits/stdc++.h>
using namespace std;

int main() {

  string s;
  cin >> s;
  vector<bool> F(128);

  int n = (int)s.size();

  // flag to judge that s is zyxwv...dcba or not
  int A = 0;
  for (int i = 0; i < n-1; i++) A |= (s[i] < s[i+1]);

  if ( n == 26) {
    if (!A) cout << -1 << endl;
    else {
      string t = s;
      next_permutation(s.begin(), s.end());
      for (int i = 0; i < n; i++) {
        cout << s[i];
        if (s[i] != t[i]) break;
      }
      cout << endl;
    }
  } else {
    for (int i = 0; i < n; i++) F[s[i]] = 1;
    for (char c = 'a'; c <= 'z'; c++) {
      if (!F[c]) {
        cout << s;
        cout << c << endl;
        break;
      }
    }
  }
  
  return 0;
}