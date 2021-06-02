#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int n;
  cin >> n;
  vector<string> x(n);
  for (int i = 0; i < n; i++) cin >> x[i];

  int ans = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 9; j++) {
      if (x[i][j] == 'x') ans++;
    }
  }

  vector<bool> check(9,false);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 9; j++) {
      if (x[i][j] == 'o' && check[j] == false) {
        check[j] = true;
        ans++;
      }
      if (x[i][j] != 'o' && check[j] == true) {
        check[j] = false;
      }
    }
  }

  cout << ans << endl;

  return 0;
}