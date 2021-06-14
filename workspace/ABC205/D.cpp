#include<bits/stdc++.h>
using namespace std;

int main() {

  long long n, q;
  cin >> n >> q;
  vector<long long> a(n), k(q);
  for (int i = 0; i < n; i++) cin >> a[i];
  for (int i = 0; i < q; i++) cin >> k[i];

  vector<long long> c(n);
  for (int i = 0; i < n; i++) {
    c[i] = a[i] - (i + 1);
  }

  for (int i = 0; i < q; i++) {
    long long Q = k[i];
    long long r = lower_bound(c.begin(), c.end(), Q) - c.begin();

    if (r == 0) cout << Q << endl;
    else {
      cout << a[r-1] + (Q - c[r-1]) << endl;
    }
  }

  

  return 0;
}