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
    string bi; cin >> bi;

    int num = 0;
    REP(i,bi.size()) {
        if (i == bi.size()-n) { if (bi[i]=='0') bi[i]='1'; else bi[i]='0'; }
        int d; d = (int)(bi[i]-'0');
        num += pow(2,i)*d;
    }

    int ans = 0;



    return 0;
}