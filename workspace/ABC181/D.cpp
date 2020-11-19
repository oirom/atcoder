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

    if (s.size()==1) {
        if (s=="8") {
            cout << "Yes" << endl;
            return 0;
        }
    }

    if (s.size()==2) {
        if (stoi(s)%8==0) {
            cout << "Yes" << endl;
            return 0;
        }

        swap(s[0], s[1]);
        if (stoi(s)%8==0) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    // s‚Ì’†‚É0,1,2,3,..,9‚ª‚»‚ê‚¼‚ê‚¢‚­‚Â‚ ‚é‚Ì‚©‚ðƒJƒEƒ“ƒg
    vector<int> cnt(10, 0);
    for (int i=0; i<(int)s.size(); i++) { cnt[s[i]-'0']++; }
    for (int i=104; i<1000; i+=8) {
        auto c = cnt;
        for (char x: to_string(i)) c[x-'0']--;
        int f = 0;
        for (int j=0; j<10; j++) {
            if (c[j]>=0) f++;
        }
        if (f==10) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    
    return 0;
}