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
    ios::sync_with_stdio(false);
    cin.tie(0);

    LL n, a, b; cin >> n >> a >> b;

    if (a>b) { 
        cout << 0 << endl; 
    } else if (n==1&&a!=b) {
        cout << 0 << endl;
    } else if (n==1&&a==b) {
        cout << 1 << endl;
    } else {
        cout << (b-a)*(n-2) + 1 << endl;
    }

    return 0;
}
