#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s; cin >> s;

    string pattern = "WBWBWWBWBWBWWBWBWWBWBWBWWBWBWWBWBWBW";

    vector<string> c = {"Do", "Do", "Re", "Re", "Mi", "Fa", "Fa", "So", "So", "La", "La", "Si", "Do"};

    int counter = 0;

    //while (!(pattern == s)) {
    //    counter++;
    //    s = s.substr(1,19) + s[0];
    //
    //}
    int i;
    for (i=0; i<12; i++) {
        string tmp = pattern.substr(i, 20);
        if (s == tmp) break;
    }

    cout << c[i];

    cout << "\n";

    return 0;
}