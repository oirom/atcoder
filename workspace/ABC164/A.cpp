#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll s, w; cin >> s >> w;

    if (w>=s) cout << "unsafe" << "\n";
    else cout << "safe" << "\n";

    return 0;
}