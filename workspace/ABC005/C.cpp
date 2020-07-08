#include <bits/stdc++.h>
#define rep(i,n) for (int i=0; i<(n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t, n, m;
    cin >> t >> n;
    vector<int> a(n,0);
    rep(i,n) cin >> a[i];
    cin >> m;
    vector<int> b(m,0);
    rep(i,m) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if (n<m) { cout << "no" << endl; return 0; }

    int j=0;
    int counter = 0;
    for (int i=0; i<m; i++) {
        for (j; j<n; j++) {
            if ((-t)<=(a[j]-b[i])&&(a[j]-b[i])<=0) { 
                counter++;
                j++;
                break;
            }
        }        
    }

    if (counter==m) cout << "yes" << endl;
    else cout << "no" << endl;

    return 0;
}
