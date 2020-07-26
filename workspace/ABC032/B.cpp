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

    string str; cin >> str;
    int n; cin >> n;    

    if (((int)(str.size()))<n) {
        cout << 0 << endl;
        return 0;
    } 
    
    set<string> ans;

    for (int i=0; i<((int)(str.size())-n+1); i++)
    {
        ans.insert(str.substr(i, n));
    }

    cout << ans.size() << endl;

    return 0;
}
