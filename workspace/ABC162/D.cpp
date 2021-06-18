#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    string s;
    cin >> s;

    long long R = 0, G = 0, B =0;

    for (int i = 0; i < (int)s.size(); i++) {
        if ( s[i] == 'R' ) R++;
        if ( s[i] == 'B' ) B++;
        if ( s[i] == 'G' ) G++;
    }

    long long ans = R*G*B;

    for (int i = 0; i < n-2; i++) {
        for (int j = i+1; j < (n-1); j++) {
            if (j+(j-i) < n){
                if ( s[i]!=s[j] && s[j]!=s[j+(j-i)] && s[i]!=s[j+(j-i)]) ans--;
            }
        }
    }

    cout << ans << endl;

    return 0;
}