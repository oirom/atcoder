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

    vector<int> p = a, q(n,0);
    q[0] = max(0, p[0]);
    for (int i=0; i<n-1; i++) {
        p[i+1] = p[i+1] + p[i];
        q[i+1] = max(q[i], p[i+1]);
    }

    int ans = 0;
    int x = 0;
    for (int i=0; i<n; i++) {
        ans = max(ans, x+q[i]);
        x = x + p[i];
    }

    cout << ans << endl;
    
    return 0;
}