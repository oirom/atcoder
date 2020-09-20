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

int main() {
  
    int n;
    cin >> n;
    vector<pair<int, int>> vp(n);
    REP(i,n) {
        cin >> vp[i].first >> vp[i].second;
    }

    for (int i=0; i<=n-3; i++) {
        if (vp[i].first == vp[i].second && vp[i+1].first == vp[i+1].second && vp[i+2].first == vp[i+2].second) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    
    return 0;
}
