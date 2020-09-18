#include <bits/stdc++.h>
#define REP(i,n) for (int i=0; i<(n); ++i)
#define REPR(i,n,m) for (int i=(n); i>=(m); --i)
using namespace std;
using LL = long long;
using LD = long double;
using PLL = pair<long long, long long>;
using PLD = pair<long double, long double>;
using VLL = vector<long long>;
using VLD = vector<long double>;
using VPLL = vector<PLL>;
using VPLD = vector<PLD>;

int main() {
  
  LL n;
  cin >> n;

  LL ans = 0;

  for (LL i=1; i<=n; i++) {
    LL num = n / i;
    LL end = num * i;
    ans += num * (i + end) / 2;
  }

  cout << ans << endl;

  return 0;
}
