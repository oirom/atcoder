#include <bits/stdc++.h>
#define ll long long

using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    ll h, w; cin >> h >> w;

    char c[h][w];
    for (int i=0; i<h; i++) {
        for (int j=0; j<w; j++) {
            cin >> c[i][j];
        }
    }

    for (int i=0; i<h; i++) {
        for (int j=0; j<w; j++) {
            cout << c[i][j];
        }
        cout << "\n";
        for (int j=0; j<w; j++) {
            cout << c[i][j];
        }
        cout << "\n";
    }
    
    return 0;
}