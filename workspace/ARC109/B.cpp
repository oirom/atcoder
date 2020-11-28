#include <bits/stdc++.h>
typedef long int li;
typedef long long ll;
using namespace std;


vector<bool> v;

int main() {

    ll n;
    cin >> n;

    ll m = 1;
    while (m*(1+m)/2<=n+1) {
        m++;
    }
    m--;

    cout << n+1-m << endl;

    return 0;
}