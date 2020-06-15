#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll a, b, c, d, e; cin >> a >> b >> c >> d >> e;

    if (a==0) cout << 1 ;
    else if (b==0) cout << 2;
    else if (c==0) cout << 3;
    else if (d==0) cout << 4;
    else cout << 5;

    cout << "\n";    

    return 0;
}