#include <bits/stdc++.h>

using namespace std;
typedef long int li;
typedef long long ll;

int main() {
    
    string s; cin >> s;
    reverse(s.begin(), s.end());

    vector<ll> count_w(2*100000+1, 0);

    ll tmp = 0;
    for (ll i=0; i<s.size(); i++) {
        if (s[i]=='W') {
            int j = i+1;
            while (s[j]=='W') count_w[i] += 1, j += 1;
            tmp += 1;
        }
    }

    for (ll i=0; i<s.size(); i++) cout << count_w[i] << " ";


    ll pre_ans = 0, ans = 0;
    for (ll i=1; i<s.size(); i++) {
        
        count_w[i] += count_w[i-1];

    }

    for (ll i=0; i<s.size(); i++) cout << count_w[i] << "\n";

    cout << ans << "\n";

    return 0;
}