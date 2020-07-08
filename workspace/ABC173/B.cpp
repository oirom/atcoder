#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    string s;
    int ac = 0, wa = 0, tle = 0, re = 0;

    for (int i=0; i<n; i++) {
        cin >> s;
        if (s == "AC") ac++;
        else if (s == "WA") wa++;
        else if (s == "TLE") tle++;
        else re++;
    }

    cout << "AC x " << ac << "\n";
    cout << "WA x " << wa << "\n";
    cout << "TLE x " << tle << "\n";
    cout << "RE x " << re << "\n";

       

    return 0;
}
