#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long n, k;
    cin >> n >> k;
    vector<vector<long long>> t(n, vector<long long>(n));
    for (long long i=0; i<n; i++) {
        for (long long j=0; j<n; j++) {
            cin >> t[i][j];
        }
    }

    vector<long long> v;
    for (long long i=1; i<n; i++) v.push_back(i);    
    sort(v.begin(), v.end());

    long long ans = 0, tmp = 0;

    do {
        // cout << 0;
        // for (int i=0; i<n-1; ++i) cout << v[i];
        // cout << 0 << ":";

        tmp = t[0][v[0]];
        for (long long i=0; i<n-1; ++i) {
            tmp += t[v[i]][v[i+1]];
        }
        tmp += t[v[n-1]][0];
        //cout << tmp << endl;
    
        if ( tmp == k ) ans++;

    } while (next_permutation(v.begin(), v.end()));

    cout << ans << endl;

    return 0;
}