#include <bits/stdc++.h>
using namespace std;
typedef long int li;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll x, counter=0; cin >> x;

    for (ll i=100; i<=1000000000000000000; i=i+i/100) 
    {
        if (i>=x)
        {
            cout << counter << "\n";
            return 0;
        }

        counter += 1;
    }

    cout << counter << "\n";
    return 0;
}