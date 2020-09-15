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
const long long mod = 1000000007;

int main() {
    
    LL s;
    cin >> s;

    VLL v(2001,0);
    v[0] = 1;   // 空なる数列も許容するとする
    v[1] = 0;
    v[2] = 0;
    v[3] = 1;

    for (LL i=4; i<=2000; i++) {
        v[i] = (v[i-1] + v[i-3])%mod;
    }

    cout << v[s] << endl;

}
