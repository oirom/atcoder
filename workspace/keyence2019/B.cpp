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

    string s;
    cin >> s;
    string keyence = "keyence";

    if (s.substr(0,7) == "keyence" || s.substr(s.size()-7, 7) == "keyence") cout << "YES" << endl;
    else {
        int c = 0;
        
        int i = 0;
        while (c < 7 && s[i] == keyence[i]) {
            i++;
            c++;
        }

        int j = (int)s.size() - 1;
        int k = 6;
        while (c < 7 && s[j] == keyence[k]) {
            c++;
            j--;
            k--;
        }

        if (c == 7) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
