#include <bits/stdc++.h>
using namespace std;

bool is_integer(long double x) { return floor(x) == x; }

int main() {
  long long L;
  cin >> L;

  long long ans = 1;
  for (int i = 1; i <= 11; i++) {
    ans = ans * (L - i) / i;
  }

  cout << ans << endl;

  return 0;
}