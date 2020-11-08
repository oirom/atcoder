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

vector<long long> enum_divisors(long long N) {
    vector<long long> res;
    for (long long i = 1; i * i <= N; ++i) {
        if (N % i == 0) {
            res.push_back(i);
            // d•¡‚µ‚È‚¢‚È‚ç‚Î i ‚Ì‘Š•û‚Å‚ ‚é N/i ‚à push
            if (N/i != i) res.push_back(N/i);
        }
    }
    // ¬‚³‚¢‡‚É•À‚Ñ‘Ö‚¦‚é
    sort(res.begin(), res.end());
    return res;
}

int main() {
  
    long long n;
    cin >> n;
    VLL a(n,0), v(1002,0);

    REP(i,n) {
        cin >> a[i];
        const auto &res = enum_divisors(a[i]);
        for (int i=0; i<res.size(); i++) v[res[i]] += 1;
    }

    long long ans = 0, MAX = 0;
    for (int i=2; i<=1000; i++) {
        if (v[i]>=MAX){
            ans = i;
            MAX = v[i];
        }
    }

    cout << ans << endl;

    return 0;

}