#include <bits/stdc++.h>
using namespace std;
typedef long int li;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s, t; cin >> s >> t;

    ll n = 0;

    //cout << s.size() << "\n";

    for (int i=0; i<s.size(); i++)
    {
        if (s[i] == t[i]) n += 1;
    }

    if (n == s.size()) cout << "Yes" << "\n";
    else cout << "No" << "\n";
    

    return 0;
}