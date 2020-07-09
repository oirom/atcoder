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
    int ng1, ng2, ng3; cin >> ng1 >> ng2 >> ng3;
    
    VLL dp(n+10, INF); dp[n] = 0;

    for (int i=n;i>0;i--)
    {
        // i が NG の時はスキップするので dp[i] が INF のまま
        if (i==ng1||i==ng2||i==ng3)
        {
            continue;
        }
        int upper = 4;
        if (i==2) upper = 3;
        else if (i==1) upper = 2;
        /*
        スキップした数より大きい数から，スキップした数より小さい数へ
        遷移可能であればここでステップ数の代入が行われる
        */
        for (int j=1;j<upper;j++)
        {
            dp[i-j] = min(dp[i]+1, dp[i-j]);
        }
    }

    if (dp[0]<=100) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}
