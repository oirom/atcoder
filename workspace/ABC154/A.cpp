#include<bits/stdc++.h>
using namespace std;

int main() {

  long long n;
  cin >> n;
  vector<long long> a(n);
  for (int i = 0; i< n; i++) cin >> a[i];

  set<long long> st;
  for (auto x : a) st.insert(x);

  cout << ((int)st.size() == (int)a.size() ? "YES" : "NO") << endl;

  return 0;
}