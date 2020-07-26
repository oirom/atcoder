#include <bits/stdc++.h>
using namespace std;
typedef long int li;
typedef long long ll;

li floor(li a, li b) {
    return (a - a%b) / b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    li a, b, n, x; cin >> a >> b >> n;

    if (n>=b-1) x = b-1;
    else x = n;

    cout << floor((a*x), b) - a * floor(x/b) << "\n";

    return 0;
}