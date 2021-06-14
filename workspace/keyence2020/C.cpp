#include <bits/stdc++.h>
using namespace std;

int main() {

  long long n, k, s;
  cin >> n >> k >> s;

  if (s != 1000000000) {
    for (int i = 0; i < n; i++) {
      if (i < k) cout << s << " ";
      else cout << s + 1 << " ";
    }
  } else {
    for (int i = 0; i < n; i++) {
      if (i < k) cout << s << " ";
      else cout << 1 << " ";
    }
  }
  cout << endl;
  
  return 0;
}
