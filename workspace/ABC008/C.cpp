#include <bits/stdc++.h>
#define REP(i,n) for (int i=0; i<(n); ++i)
using namespace std;
using LL = long long;
using PII = pair<int, int>;
using VLL = vector<long long>;

const int INF = numeric_limits<int>::max();

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    VLL C(n,0); REP(i,n) cin >> C[i];

    double ans = 0.0;

    for (int i=0;i<n;i++) {
        int num = 0;
        for (int j=0; j<n; j++) {
            if (j==i) continue;
            if (C[i]%C[j]==0) num++;
        }
        if (num%2==0) ans += (double)((num+2)/2) / (num+1);
        else ans += 0.5;
    }

    cout << fixed << setprecision(10) << ans << endl;

    return 0;
}
