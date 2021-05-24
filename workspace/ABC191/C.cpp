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

vector<bool> chk(2*100000+1, false);

struct UnionFind {
    vector<int> par;

    UnionFind(int n) : par(n, -1) {}
    void init(int n) { par.assign(n, -1); }

    int root(int x) {
        if (par[x] < 0) return x;
        else return par[x] = root(par[x]);
    }

    bool issame(int x, int y) {
        return root(x) == root(y);
    }

    bool merge(int x, int y) {
        x = root(x); y = root(y);
        if (x == y) return false;
        if (par[x] > par[y]) swap(x, y);
        par[x] += par[y];
        par[y] = x;
        //cout << "par[" << x << "]" << par[x] << endl;
        //cout << "par[" << y << "]" << par[y] << endl;
        return true;
    }

    int size(int x) {
        return -par[root(x)];
    }
};

int main() {

    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i,h) cin >> s[i];

    int ans = 0;
    rep(i, h-1) rep(j, w-1) {
        int cnt = 0;
        rep(di,2) rep(dj,2) {
            if (s[i+di][j+dj] == '#') cnt++;
        }
        if (cnt == 1 || cnt == 3) ans++;
    }

    cout << ans << endl;

    return 0;
}
