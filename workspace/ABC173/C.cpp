#include <bits/stdc++.h>
#define rep(i,n) for (int i=0; i<(n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int h, w, k; cin >> h >> w >> k;
    vector<string> s(h);
    rep(i,h) cin >> s[i];
    
    int ans = 0;
    
    for (int ibit=0; ibit<(1<<h); ibit++) {
        for (int jbit=0; jbit<(1<<w); jbit++) {
            int cnt = 0;
            rep(i,h) {
                rep(j, w) {
                    if (ibit>>i&1) continue;
                    if (jbit>>j&1) continue;
                    if (s[i][j] == '#') cnt++;
                }
            }
            if (cnt == k) ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
