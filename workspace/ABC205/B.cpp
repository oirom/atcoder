#include<bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i< n; i++) cin >> a[i];

  sort(a.begin(), a.end());

  if (a[0] != 1) {cout << "No" << endl; return 0;}

  for (int i = 1; i < n; i++) {
    if (a[i] == a[i-1] + 1) continue;
    else {cout << "No" << endl; return 0;}
  }

  cout << "Yes" << endl;

  return 0;
}