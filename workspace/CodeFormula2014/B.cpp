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

    // int n; cin >> n;
    string str; cin >> str;
    reverse(str.begin(), str.end());

    int ans1 = 0, ans2 = 0;

    for (int i=0; i<str.size(); i++)
    {
        if (i%2==0) ans1 += ((int)str[i] - 48);
        else ans2 += ((int)str[i] - 48);
    }

    cout << ans2 << " " << ans1 << endl;

    return 0;
}
