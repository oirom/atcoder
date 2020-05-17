#include <bits/stdc++.h>

using namespace std;
typedef long int li;
typedef long long ll;

int main() {
    
    ll n; cin >> n;
    char s[100000][10]; 
    for (ll i=0; i<n; i++) {
        for (ll j=0; j<n; j++) cin >> s[i][j];
    }
        
    ll m, a, r, c, h;
    for (ll i=0; i<n; i++) {
        if (s[i][0]=='m') m += 1;
        if (s[i][0]=='a') a += 1;
        if (s[i][0]=='r') r += 1;
        if (s[i][0]=='c') c += 1;
        if (s[i][0]=='h') h += 1;
    }

    

    return 0;
}