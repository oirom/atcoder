#include <bits/stdc++.h>

#define rep(i,n) for(int i=0; i<n; i++)

using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long int n, m; cin >> n >> m;
    
    if (n>=2&&m>=2) cout << (n-2) * (m-2) << "\n";
    else if (n==1) {
        if (m!=1) cout << m-2 << "\n";
        else cout << 1 << "\n";
    }
    else if (m==1) {
        if (n!=1) cout << n-2 << "\n";
        else cout << 1 << "\n";
    }

    return 0;
}