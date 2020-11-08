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
  
    string s;
    cin >> s;
    
    if (stoll(s)%3==0) {
        cout << 0 << endl;
        return 0;
    }

    long long n = (long long)s.size();
    long long count = 99;
    
    for (long long bit = 0; bit < (1<<n); ++bit) {
        string tmp = s;

        vector<long long> S;
        for (long long i = 0; i < n; ++i) {
            if (bit & (1<<i)) { // —ñ‹“‚É i ‚ªŠÜ‚Ü‚ê‚é‚©
                S.push_back(i);
            }
        }

        reverse(S.begin(), S.end());

        for (long long i = 0; i < (int)S.size(); ++i) {
            tmp.erase(tmp.begin() + S[i]);
        }
        
        if (tmp.size()>0) {
            if (stoll(tmp)%3==0) {
                count = min((long long)S.size(), count);
            }
        }
    }
    
    if (count == 99) {
        cout << -1 << endl;
    } else {
        cout << count << endl;
    }

    return 0;

}