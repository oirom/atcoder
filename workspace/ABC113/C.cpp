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
using VPLL = vector<PLL>;
using VPLD = vector<PLD>;

const int INF = numeric_limits<int>::max();

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    LL n, m;
    cin >> n >> m;
    VPLL p(m), pp(m);
    REP(i,m)
    {
        cin >> p[i].first >> p[i].second;
        pp[i].first = p[i].first;
        pp[i].second = p[i].second;
    }

    map<string, LL> mp;

    sort(p.begin(), p.end());
    LL tmp = p[0].first, rank = 1;
    REP(i,m)
    {
        if (p[i].first!=tmp) rank = 1, tmp = p[i].first;
        string title = to_string(p[i].first) + to_string(p[i].second);
        mp[title] = rank;
        rank++;
    }

    REP(i,m)
    {
        string title = to_string(pp[i].first) + to_string(pp[i].second);
        cout << setfill('0') << right << setw(6) << pp[i].first;
        cout << setfill('0') << right << setw(6) << mp[title];
        cout << endl;
    }

    return 0;
}
