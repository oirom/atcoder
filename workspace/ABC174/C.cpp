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

    LL k;
    cin >> k;
    VLL v(1000001,0);

    v[1] = 7%k;
    for (LL i=2; i <= k; i++) {
        v[i] = (v[i-1] * 10 + 7) % k;
    }

    for (LL i=1; i <= k; i++) {
        if (v[i]==0) {
            cout << i << endl;
            return 0;
        }
    }
    
    cout << "-1" << endl;

    return 0;
}
