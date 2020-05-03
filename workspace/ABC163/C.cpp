#include <bits/stdc++.h>
using namespace std;
typedef long int li;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    vector<int> a(n+1,0), b(n+1,0);

    for (int i=2; i<=n; i++) cin >> a[i];
    
    for (int i=1; i<=n; i++) {
        b[a[i]] += 1;
    }

    for (int i=1; i<=n; i++) cout << b[i] << "\n";

    return 0;
}