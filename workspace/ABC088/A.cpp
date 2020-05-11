#include <bits/stdc++.h>
using namespace std;
typedef long int li;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, a; cin >> n >> a;

    if ((n%500)<=a) cout << "Yes";
    else cout << "No";

    cout << "\n";

    return 0;
}