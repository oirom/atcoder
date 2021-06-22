#include<bits/stdc++.h>
using namespace std;

long long nCr(long long n, long long r) {
  long long num = 1;
  for(long long i = 1; i <= r; i++) num = num * (n - i + 1) / i;
  return num;
}

int main() {

  long long n;
  cin >> n;
  vector<long long> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];

  map<long long, long long> mp;
  for (auto x : a) mp[x]++;

  long long ans = nCr(n, 2);
  for (auto x : mp) ans -= x.second * (x.second-1) / 2;

  cout << ans << endl;

  return 0;
}