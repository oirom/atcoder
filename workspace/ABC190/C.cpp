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

    int n, m, k;
    cin >> n >> m;
    vector<int> a(m), b(m);
    rep(i,m) {
        cin >> a[i] >> b[i];
        a[i]--;
        b[i]--;
    }
    cin >> k;
    vector<int> c(k), d(k);
    rep(i,k) {
        cin >> c[i] >> d[i];
        c[i]--;
        d[i]--;
    }

    int ans = 0;

    for (int bit = 0; bit < (1 << k); bit++) {
        vector<int> dish(n+1,0);
        for (int i = 0; i < k; i++) {
            if (1 & (bit >> i)) dish[d[i]]++;
            else dish[c[i]]++;
        }
        int tmp = 0;
        for (int i = 0; i < m; i++) {
            if (dish[a[i]] > 0 && dish[b[i]] > 0) tmp++;
        }
        ans = max(ans, tmp);
    }

    cout << ans << endl;

    return 0;
}
