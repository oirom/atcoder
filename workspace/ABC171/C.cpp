#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n; cin >> n;
    string ans = "";

    while (n) {
        n--;
        ans += (char)('a' + (n%26));
        n /= 26;
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;

    return 0;
}
