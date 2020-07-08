#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n; cin >> n;

    int i;
    for (i=1; i<=10; i++) {
        if (1000*i - n >= 0) break;
    }

    cout << 1000*i - n << endl;
       

    return 0;
}
