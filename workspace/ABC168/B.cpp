#include <bits/stdc++.h>
using namespace std;
typedef long int li;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n; string s; cin >> s;

    if (s.size()<=n) {
        cout << s << "\n";
    }

    else {
        for (int i=0; i<n; i++) {
            cout << s[i];
        }
        cout << "..." << "\n";
    }
    

    return 0;
}