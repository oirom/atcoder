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
using VPLD = vector<PLD>;

const int INF = numeric_limits<int>::max();

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    vector<int> v(n,0); REP(i,n) cin >> v[i];

    int sum = 0;
    REP(i,n)
    {
        sum += v[i];
    }
    int ave = sum/n;
    int ave1 = ave + 1;
    int ave2 = ave - 1;

    int ans = 0;
    int ans1 = 0;
    int ans2 = 0;
    REP(i,n)
    {
        ans += (ave-v[i]) * (ave-v[i]);
        ans1 += (ave1-v[i]) * (ave1-v[i]);
        ans2 += (ave2-v[i]) * (ave2-v[i]);
    }

    cout << min(ans2, min(ans, ans1)) << endl;

    return 0;
}
