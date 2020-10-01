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
  
    LL n, m;
    cin >> n >> m;
    VPLL ab(m);
    vector<int> c(n+10, 0);
    
    LL group = 0;

    REP(i,m) cin >> ab[i].first >> ab[i].second;

    sort(ab.begin(), ab.end());

    REP(i,m) {
        if ( c[ab[i].first]==0 && c[ab[i].second]==0 ) group++;
        c[ab[i].first] += 1;
        c[ab[i].second] += 1;
    }

    LL extra = 0;
    REP(i,n) if ( c[i+1]==false ) extra++;

    cout << group + extra - 1 << endl;
    return 0;
}
