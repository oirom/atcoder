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

    int N, M; cin >> N >> M;
    vector<long long> a(N), b(N);
    for (int i = 0; i < N; i++) cin >> a[i];
    for (int i = 0; i < N; i++) cin >> b[i];

    UnionFind uf(N);
    for (int i = 0; i < M; i++) {
        int c, d;
        cin >> c >> d;
        c--, d--;
        uf.merge(c, d);
    }

    vector<long long> sa(N,0), sb(N,0);
    for (int i = 0; i < N; i++) {
        int x = uf.root(i);
        sa[x] += a[i];
        sb[x] += b[i];
    }

    for (int i = 0; i < N; i++) {
        if (sa[i] != sb[i]) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}
