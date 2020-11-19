
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
    vector<pair<int, int>> p(n);
    for (int i=0; i<n; ++i) cin >> p[i].first >> p[i].second;
    
    for (int i=0; i<n-2; ++i) {
        for (int j=i+1; j<n-1; ++j) {
            for (int k=j+1; k<n; ++k) {
                int x1 = p[i].first, y1 = p[i].second;
                int x2 = p[j].first, y2 = p[j].second;
                int x3 = p[k].first, y3 = p[k].second;

                x1 -= x3, y1 -= y3;
                x2 -= x3, y2 -= y3;

                if (y1*x2==y2*x1) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "No" << endl;

    return 0;
}