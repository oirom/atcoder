#include <bits/stdc++.h>
using namespace std;
typedef long int li;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    int h[n]; for (int i=0; i<n; i++) cin >> h[i];
    
    // dp table
    vector<int> dp(n+10, 0); 
    dp[0] = 0;
    dp[1] = abs(h[1] - h[0]);
    
    int ans = 0;

    for (int i=2; i<n; i++)
    {
        dp[i] = min(dp[i-2] + abs(h[i-2]-h[i]), dp[i-1] + abs(h[i-1]-h[i]));
    }
    
    cout << dp[n-1] << "\n";

    return 0;

}
