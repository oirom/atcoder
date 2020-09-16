#include <bits/stdc++.h>
#define REP(i,n) for (int i=0; i<(n); ++i)
#define REPR(i,n,m) for (int i=(n); i>=(m); --i)
using namespace std;
using LL = long long;
using SLL = signed long long;
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

    LL x, k, d;
    cin >> x >> k >> d;

    LL step = 0;
    LL tmp = abs(x%d);
    step = abs(x/d);
    if (step<=k) { 
        if (x>=0) x = tmp;
        else x = tmp * -1;
    } else {
        if (x>=0) x = x - k*d;
        else x = x + k*d;
        step = k;
    }
    
    if ((k-step)%2 == 0) cout << abs(x) << endl;
    else cout << min(abs(x+d), abs(x-d)) << endl;

    return 0;
}
