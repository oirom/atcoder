#include <bits/stdc++.h>
using namespace std;
typedef long int li;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s, t; cin >> s >> t;

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    reverse(t.begin(), t.end());

    if (s < t) cout << "Yes";
    else cout << "No";

    cout << "\n";

    return 0;
}