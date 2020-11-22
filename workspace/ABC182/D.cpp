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
  
    int n;
    cin >> n;
    vector<int> a(n,0);
    for (int i=0; i<n; i++) cin >> a[i];

    long long ans = 0, s = 0, b = 0, max_b = 0;
    for (int i=0; i<n; i++) {
        b += a[i];
        max_b = max(max_b, b);
        ans = max(ans, s+max_b);
        s += b;
    }

    cout << ans << endl;
    
    return 0;
}