#include <bits/stdc++.h>
using namespace std;
typedef long int li;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    vector<ll> a(n,0);

    for (int i=0; i<n; i++) cin >> a[i];

    vector<ll> s(n+1, 0);
    map<ll, ll> nums;

    for (int i=0; i<n; i++) s[i+1] = s[i] + a[i];
    for (int i=0; i<n+1; i++) nums[s[i]]++;

    ll res = 0;
    for (auto it : nums) {
        ll num = it.second;
        res += num * (num-1) / 2;
    }

    cout << res << "\n";

    return 0;
}