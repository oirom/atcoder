#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, a, b, c, d, ans = 0, tmp = 1;

void five() {

    ll pre_diff = abs(n - tmp);
    ll new_diff = abs(n - tmp * 5);
    if (pre_diff >= new_diff) tmp *= 5;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t; cin >> t;
    vector<ll> ans(t,0);

    for (int test=0; test<t; test++)
    {
        cin >> n >> a >> b >> c >> d;

        




    }

    return 0;
}