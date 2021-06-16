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

long long gcd(long long x, long long y) { return (x % y)? gcd(y, x % y): y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }


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

int f(string s) {
    vector<int> a(10);
    for (char c : s) a[c - '0']++;
    int res = 0;
    for (int i = 1; i <= 9; i++) {
        int X = 1;
        for (int j = 0; j < a[i]; j++) X *= 10;
        res += (X * i);
    }
    return res;
}

int main() {

    long long x, y;
    cin >> x >> y;

    long long ans = 3000000000;

    if (x <= y) ans = min(ans, y - x);
    x *= -1;
    if (x <= y) ans = min(ans, y - x + 1);
    y *= -1;
    if (x <= y) ans = min(ans, y - x + 2);
    x *= -1;
    if (x <= y) ans = min(ans, y - x + 1);

    //cout << (ans == 0 ? 1 : ans) << endl;
    cout << ans << endl;

    return 0;
}
