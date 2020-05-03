#include <bits/stdc++.h>
using namespace std;
typedef long int li;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    vector<int> a(n+10,0), b(n+10,0); 
    
    for (int i=1; i<=n; i++) {
        cin >> a[i];
        b[a[i]] += 1;
    }
    
    li sum = 0;
    for (int i=1; i<=n; i++) if (b[i]>=2) sum += b[i] * (b[i]-1) / 2;

    for (int i=1; i<=n; i++) {
        if (b[a[i]]>=2) cout << sum - (b[a[i]] - 1) << "\n";
        else cout << sum << "\n";
    }

    return 0;
}