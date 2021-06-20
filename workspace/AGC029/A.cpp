#include<bits/stdc++.h>
using namespace std;

int main() {

  string s;
  cin >> s;

  long long n = (int)s.size();

  vector<long long> cnt(n, 0);
  long long c = 0;

  for (int i = 0; i < n; i++) {
    if (s[i]=='B') c++;
    if (s[i]=='W') cnt[i] = c;
  }

  long long ans = 0;
  for (int i = 0; i < n; i++) ans += cnt[i];
  
  cout << ans << endl;

  return 0;
}