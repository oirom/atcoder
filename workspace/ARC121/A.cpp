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
using graph = vector<vector<ll>>;

const int inf = numeric_limits<int>::max();

long long gcd(long long x, long long y) { return (x % y)? gcd(y, x % y): y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

struct unionfind {
    vector<int> p;
    unionfind(int n) {
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
        int x = 1;
        for (int j = 0; j < a[i]; j++) x *= 10;
        res += (x * i);
    }
    return res;
}

int main() {

    ll n, ans1 = 0, ans2 = 0, ans3 = 0;
    cin >> n;
    vll x(n), y(n);
    // ll x_min_ind, x_max_ind, y_min_ind, y_max_ind;
    // ll x_min_ind2, x_max_ind2, y_min_ind2, y_max_ind2;
    // ll x_min = 1000000001, x_max = -1, y_min = 1000000001, y_max = -1;
    rep(i, n) cin >> x[i] >> y[i];

    vll x2 =x, y2 = y;

    sort(x.begin(), x.end());
    sort(y.begin(), y.end());

    


    return 0;
}
