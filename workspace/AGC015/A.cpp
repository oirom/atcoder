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
using VPLD = vector<PLD>;

const int INF = numeric_limits<int>::max();

int main() {

    LL N, A, B;
    cin >> N >> A >> B;
    LL rest = N - 2;

    LL ans = (A + B + rest * B) - (A + B + rest * A) + 1;   
    cout << (ans <= 0 ? 0 : ans )<< endl;

    return 0;
}
