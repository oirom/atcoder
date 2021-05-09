#include <bits/stdc++.h>
using namespace std;

bool hantei(string s) {
  int cnt = 0;
  for (int i = 0; i < (int)s.size(); i++) {
    if (s[i] == '(') cnt++;
    if (s[i] == ')') cnt--;
    if (cnt < 0) return false;
  }
  if (cnt == 0) return true;
  return false;
}

int main() {
  int N;
  cin >> N;

  for (int i = 0; i < (1 << N); i++) {
    string str = "";
    // cout << bitset<4>(i) << ": ";
    // for (int bit = N-1; bit >= 0; bit--) {
    for (int bit = 0; bit < N; bit++) {
      if ((1 & (i >> bit)) == 0) {
        str += "(";
      } else {
        str += ")";
      }
    }

    if (hantei(str)) cout << str << endl;
  }

  return 0;
}