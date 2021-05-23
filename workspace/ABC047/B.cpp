#include <bits/stdc++.h>
#define rep(i,n) for (int i=0; i<(n); ++i)
#define repr(i,n,m) for (int i=(n); i>=(m); --i)
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

    int w, h, n;
    cin >> w >> h >> n;
    vector<int> x(n), y(n), a(n);
    rep(i,n) cin >> x[i] >> y[i] >> a[i];
    //rep(i,n) cin >> y[i];
    //rep(i,n) cin >> a[i];

    int left = 0, right = w, top = h, bottom = 0;

    rep(i,n) {
        if (a[i] == 1) left = max(left, x[i]);
        if (a[i] == 2) right = min(right, x[i]);
        if (a[i] == 3) bottom = max(bottom, y[i]);
        if (a[i] == 4) top = min(top, y[i]); 
    }

    //printf("L:%d, R:%d, T:%d, B:%d\n", left, right, top, bottom);
    
    if (right > left && top > bottom) {
        cout << (right - left) * (top - bottom) << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}
