#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n, k; 
    cin >> n >> k;
    ll counter = 0;

    while (n>=k)
    {
        // cout << n/k << "\n";
        n = n/k;
        counter += 1;
    }

    cout << counter + 1 << "\n";

    return 0;
}