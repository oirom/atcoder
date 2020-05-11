#include <bits/stdc++.h>
using namespace std;
typedef long int li;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a, b; cin >> a >> b;

    if ((a*b)%2==0) cout << "Even";
    else cout << "Odd";

    cout << "\n";    

    return 0;
}