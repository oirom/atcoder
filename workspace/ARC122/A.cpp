#include<bits/stdc++.h>
using namespace std;

int main() {

  long long n;
  cin >> n;
  vector<long long> v(n);
  for (int i = 0; i < n; i++) cin >> v[i];

  sort(v.begin(), v.end());
  vector<long long> sum(n);
  for (int i = 0; i < n; i++) {
    if (i == 0) {sum[i] = v[i]; continue;}
    sum[i] += v[i] + sum[i-1];
  }
  
  map<long long, long long> cnt;
  for (int i = 0; i < n; i++) {
    if (i == 0) {cnt[v[i]] = 1; continue;}
    cnt[v[i]] += cnt[v[i-1]] + 1;
  }

  for (int i = 0; i < n; i++) {
    cout << cnt[v[i]] << endl;
  }
  
  

  return 0;
}