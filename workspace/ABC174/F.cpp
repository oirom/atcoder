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

const int INF = numeric_limits<int>::max();
const unsigned long long int ULLINF = numeric_limits<unsigned long long int>::max();

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    LL n, q; cin >> n >> q;
    VLL c(n); REP(i,n) cin >> c[i];
    VPLL lr(q); REP(i,q) cin >> lr[i].first >> lr[i].second;

    set<LL> st;
    VLL nn(n+1,0);
    for (int i=0; i<n; i++) {
        st.insert(c[i]);
        nn[i+1] = (LL)st.size();
    }

    REP(i,q) {
        cout << nn[lr[i].second] - nn[lr[i].first-1] << endl;
    }

    return 0;
}
