#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, a, b;
  cin >> n >> a >> b;
  string s;
  cin >> s;
  int aa = a, bb = b, passed = 0;

  for (int i = 0; i < (int)s.size(); i++) {
    if (s[i] == 'c') cout << "No" << endl;
    if (s[i] == 'a') {
      if (passed < a + b) cout << "Yes" << endl, passed++;
      else cout << "No" << endl;
    }
    if (s[i] == 'b') {
      if (passed < a + b && bb > 0) cout << "Yes" << endl, passed++, bb--;
      else cout << "No" << endl;
    }
  }
  
  return 0;
}
