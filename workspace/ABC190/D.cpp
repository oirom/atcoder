#include <bits/stdc++.h>
#define rep(i,n) for (int i=0; i<(n); ++i)
#define repr(i,n,m) for (int i=(n); i>=(m); --i)
using namespace std;
using ll = long long;
using ld = long double;
using pll = pair<long long, long long>;
using pld = pair<long double, long double>;
using vll = vector<long long>;
using vld = vector<long double>;
using vpll = vector<pll>;
using vpld = vector<pld>;
using Graph = vector<vector<ll>>;

const int INF = numeric_limits<int>::max();

struct UnionFind {
    vector<int> p;
    UnionFind(int n) {
        p.resize(n, -1);
    }

    int find (int x) {
        if (p[x] == -1) return x;
        else return p[x] = find(p[x]);
    }

    void unite(int x, int y) {
        x = find(x);
        y = find(y);
        if (x == y) return;
        p[x] = y;
    }
};

int main() {

    long long n, ans = 0;
    cin >> n;

    auto check = [&](long long l) {
        long long tmp = 2 * n / l - l + 1;
        if (abs(tmp%2) == 0) ans++;
    };

    for (long long x = 1; x * x <= 2 * n; x++) {
        if ((2*n)%x) continue;
        long long y = 2 * n / x;
        check(x);
        if (x != y) check(y);
    }

    cout << ans << endl;

    return 0;
}
