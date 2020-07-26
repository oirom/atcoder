#include <bits/stdc++.h>

using namespace std;
typedef long int li;
typedef long long ll;

int main() {
    
    ll n, c, k; cin >> n >> c >> k;
    vector<ll> t(n,0); for (ll i=0; i<n; i++) cin >> t[i];

    sort(t.begin(), t.end());

    ll ans = 0, tmp_index = 0, group_num = 0;

    bool check;
    for (ll i=0; i<n; i++) {
        check = true;;
        if ((group_num<c)&&(t[i]<=t[tmp_index]+k)) {
            group_num += 1;
            if (group_num==c) {
                group_num = 0;
                tmp_index = i+1;
                ans += 1;
                check = false;
            }
        }
        else {
            ans += 1;
            group_num = 1;
            tmp_index = i;
        }
    }

    if (check) ans += 1;

    cout << ans << "\n";

    return 0;
}