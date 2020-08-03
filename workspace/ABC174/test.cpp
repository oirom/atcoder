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
const unsigned long long int ULLINF = numeric_limits<unsigned long long int>::max();

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    LL n; cin >> n;
    map<char, LL> mp;
    vector<char> v(n);
    REP(i,n) cin >> v[i], mp[v[i]]++;
    
    vector<LL> r_index(mp['R'], 0), w_index(mp['W'], 0);
    REP(i,n) {
        if (v[i]=='W') w_index.push_back(i);
        else r_index.push_back(i);
    }
    if (mp['R']==0||mp['W']==0) { cout << 0 << endl; return 0; }
    
    LL left = 0, right = v.size()-1;
    LL ans = 0;
    while (left<=right)
    {
        if (v[left]=='W'&&v[right]=='R') {
            ans++;
            left++;
            right--;
        }
        else if (v[left]=='R'&&v[right]=='R') {
            left++;
        }
        else if (v[left]=='W'&&v[right]=='W') {
            right--;
        }
    }

    cout << ans << endl;

    return 0;
}
