#include <bits/stdc++.h>
using namespace std;
typedef long int li;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, k, b; cin >> n >> k;
    vector<int> s(n, 0);
    vector<int> a(110, 0);

    int ans = 0;

    for (int i=0; i<k; i++) {
        
        int d; cin >> d;

        for (int i=0; i<d; i++) {
            int num; cin >> num;
            a[num] = 1;
        }
    }

    for (int i=1; i<=n; i++) if (a[i]==0) ans += 1;

    cout << ans << "\n";
    
    return 0;
}