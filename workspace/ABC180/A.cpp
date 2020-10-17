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
    vector<long long> x(n, 0);
    REP(i,n) {
        long long tmp;
        cin >> tmp;
        x[i] = abs(tmp);
    }

    long long md = 0;
    long double ed = 0;
    long long cd = 0;

    REP(i,n) {
        md += x[i];
        ed += (long double)(x[i]*x[i]);
        cd = max(cd, x[i]);
    }

    cout << md << endl;
    cout << fixed << setprecision(15) << sqrt(ed) << endl;
    cout << cd << endl;

    return 0;
}
