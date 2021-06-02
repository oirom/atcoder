#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int ans = 0;
  for (int i = 0; i < (n/9)+1; i++) {
    ans += (n%9) * pow(10, i);
  }

  if (ans == 0) {
    for (int i = 0; i < (n/9); i++) {
      ans += 9 * pow(10, i);
    }
  }

  cout << ans << endl;

  return 0;
}