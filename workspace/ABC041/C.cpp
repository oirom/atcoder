#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int n;
  cin >> n;
  vector<int> a(n);
  map<string, int> m;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    a[i] = stoi(s);
    m[s] = i+1;
  }

  sort(a.rbegin(), a.rend());

  for (int i = 0; i < n; i++) {
    // cout << a[i] << endl;
    cout << m[to_string(a[i])] << endl;
  }

  return 0;
}