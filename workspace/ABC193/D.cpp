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

    long long k;
    string s, t;
    cin >> k >> s >> t;

    vector<long long> c(10,k);
    c[0] = 0;
    rep(i,4) c[s[i]-'0']--;
    rep(i,4) c[t[i]-'0']--;

    long long cnt = 0;

    for (int a = 1; a <= 9; a++) {
        for (int b = 1; b <= 9; b++) {
            s[4] = '0' + a;
            t[4] = '0' + b;
            if (f(s) > f(t)) {
                if (a == b) cnt += (long long)c[a]*(c[a] - 1);
                else cnt += (long long)c[a]*c[b];
            }
        }
    }

    long long C = 0;
    //for (int i = 0; i < 10; i++) C += c[i];
    rep(i,10) C += c[i];
    long long tot = C * (C - 1);
    double ans = (double)cnt/tot;
    printf("%.10f\n", ans);
    return 0;
}
