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
    
    LL a, b, c, d;
    cin >> a >> b >> c >> d;

    VLL ans(4,0);
    ans[0] = a * c;
    ans[1] = b * d;
    ans[2] = a * d;
    ans[3] = b * c;

    LL anss;
    anss = max(ans[0], ans[1]);
    anss = max(anss, ans[2]);
    anss = max(anss, ans[3]);

    cout << anss << endl;

    return 0;

}
