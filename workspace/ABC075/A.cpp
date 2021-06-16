#include<bits/stdc++.h>
using namespace std;

int main() {

  int a, b, c;
  cin >> a >> b >> c;

  if (a != b && b != c) cout << b << endl;
  else if (a != c && b != c) cout << c << endl;
  else cout << a << endl;

  return 0;
}