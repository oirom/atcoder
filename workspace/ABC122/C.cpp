#include <bits/stdc++.h>
using namespace std;
typedef long int li;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, q, l, r, tmp=0; cin >> n >> q;
    string s; cin >> s;
    vector<int> count_ac(n+2,0);

    for (int i=0; i<s.size()-1; i++){
        if ("AC"==s.substr(i,2)) {
            count_ac[i+2] = tmp + 1;
            tmp = count_ac[i+2];
            i += 1;
        }
    }

    for (int i=1; i<=s.size(); i++) {
        if (count_ac[i]==0) count_ac[i] = count_ac[i-1];
    }

    for (int i=1; i<=q; i++) {
        cin >> l >> r;
        cout << count_ac[r] - count_ac[l] << "\n";
    }


    return 0;
}