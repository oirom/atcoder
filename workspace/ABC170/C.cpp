#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int x, n; cin >> x >> n;
    if (n==0) {
        cout << x << endl;
        return 0;
    }
    vector<int> p(n,0); for (int i=0;i<n;i++) cin >> p[i];

    int diff = 10000000;
    int ans = 0;


    sort(p.begin(), p.end());

    for (int i=0; i<=101; i++)
    {
        if (find(p.begin(), p.end(), i) != p.end()) continue;
        else {
            if (diff>abs(x-i)) { diff = abs(x-i), ans = i; }
        }
    }

    cout << ans << endl;

    return 0;
}