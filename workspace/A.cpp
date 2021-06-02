#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  if ((int)s.size() < 26) {
    vector<int> alp(26,0);
    for (int i = 0; i < (int)s.size(); i++) {
      alp[(int)(s[i] - '0' - 49)]++;
    }

    for (int i = 0; i < 26; i++) {
      if (alp[i] == 0) {
        s += (char)('0' + i + 49);
        cout << s << endl;
        return 0;
      }
    }
  }
  
  int cnt = 0, maxi = 0;
  for (int i = 0; i < (int)s.size(); i++) {
    int tmp = 0;
    while (s[i] > s[i+1] && i < (int)s.size()) {
      tmp++;
      i++;
    }
    if (tmp > cnt) maxi = i - tmp;
    i--;
  }

  return 0;
}