#include <bits/stdc++.h>
using namespace std;
typedef long int li;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a, b; cin >> a >> b;

    if ((a+b)%2==0) cout << (a+b)/2;
    else cout << (a+b)/2 + 1;

    cout << "\n";

    return 0;
}