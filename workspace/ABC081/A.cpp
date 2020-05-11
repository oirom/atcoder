#include <bits/stdc++.h>
using namespace std;
typedef long int li;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s; cin >> s;

    int ans = 0;

    for (int i=0; i<3; i++)
    {
        if (s[i]=='1') ans += 1;
    }

    cout << ans;

    cout << "\n";

    return 0;
}