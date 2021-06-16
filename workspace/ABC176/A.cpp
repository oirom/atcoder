#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, x, t;
  cin >> n >> x >> t;

  cout << (n%x == 0 ? n/x : n/x + 1) * t << endl;

  return 0;
}