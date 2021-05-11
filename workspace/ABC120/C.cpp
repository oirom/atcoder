#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  int one = 0;
  int zero = 0;
  for (int i = 0; i < (int)S.size(); i++) {
    if (S[i] == '0')
      one++;
    else
      zero++;
  }

  cout << 2 * min(one, zero) << endl;

  return 0;
}