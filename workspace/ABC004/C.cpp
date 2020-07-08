#include <bits/stdc++.h>
#define rep(i,n) for (int i=0; i<(n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n; cin >> n;
    n = n%30;
    vector<int> card(7, 0); for (int i=1; i<=6; i++) card[i] = i;

    for (ll i=0; i<n; i++) {
        int tmp = card[(i%5+1)];
        card[(i%5+1)] = card[(i%5+2)];
        card[(i%5+2)] = tmp;
    }

    for (int i=1; i<=6; i++) { cout << card[i]; }

    cout << endl;

    return 0;
}
