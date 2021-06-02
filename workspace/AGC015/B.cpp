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

    string S;
    cin >> S;

    LL total_level = (LL)S.size() - 1;
    LL ans = 0;

    for (int i = 0; i < (int)S.size(); i++) {
        if (S[i] == 'U') {
            ans += (total_level - i);
            ans += 2 * i;
        } else if (S[i] == 'D') {
            ans += i;
            ans += 2 * (total_level - i);
        }
    }

    cout << ans << endl;

    return 0;
}
