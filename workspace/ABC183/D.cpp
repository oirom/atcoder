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
  
    LL n, w;
    cin >> n >> w;

    vector<LL> v(200005, 0);
    for (LL i=0; i<n; i++) {
        LL s, t, p;
        cin >> s >> t >> p;
        v[s] += p;
        v[t] -= p;
    }

    for (int i=1; i<200001; i++) v[i] += v[i-1];
    for (int i=0; i<200001; i++) {
        if (v[i]>w) {
            cout << "No" << endl;
            return 0;
        }
    }   
    
    cout << "Yes" << endl;

    return 0;

}