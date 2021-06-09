#include <bits/stdc++.h>
using namespace std;
typedef long int li;
typedef long long ll;



int main() {
    
    int n, m;
    cin >> n >> m;
    vector<int> h(n+10);
    for (int i = 1; i <= n; i++) cin >> h[i];
    vector<int> a(m+10), b(m+10);
    vector<vector<int>> dp(n+10);
    for (int i = 1; i <= m; i++) {
        cin >> a[i] >> b[i];
        dp[a[i]].push_back(b[i]);
        dp[b[i]].push_back(a[i]);
    }

    int ans = 0;

    for (int i = 1; i <= n; i++) {
        bool chk = true;
        for (auto x : dp[i]) {
            if (h[i] <= h[x]) chk = false;
        }
        if (chk) ans++;
    }
    
    cout << ans << endl;

    return 0;
}