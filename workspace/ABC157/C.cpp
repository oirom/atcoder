#include <bits/stdc++.h>
#define REP(i,n) for (int i=0; i<(n); ++i)
#define REPR(i,n,m) for (int i=(n); i>=(m); --i)
using namespace std;
using LL = long long;
using LD = long double;
using PLL = pair<long long, long long>;     // 
using PLD = pair<long double, long double>;
using VLL = vector<long long>;
using VLD = vector<long double>;
using VPLD = vector<PLD>;

const int INF = numeric_limits<int>::max();

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m; cin >> n >> m;
    vector<PLL> p(m); REP(i,m) cin >> p[i].first >> p[i].second;

    sort(p.begin(), p.end());
    for (int i=0; i<m-1; i++) {
        if (p[i].first==p[i+1].first&&p[i].second!=p[i+1].second) {
            cout << "-1" << endl;
            return 0;
        }
    }

    for (int i=0; i<1000; i++) {
        string str = to_string(i);
        if ((int)str.size()==n) {
            bool f = true;
            for (int j=0; j<m; j++) {
                if ((str[p[j].first-1]-'0')==p[j].second) ;
                else f = false;
            }
            if (f == true) {
                cout << str << endl;
                return 0;
            }
        }
    }

    cout << "-1" << endl;

    return 0;
}
