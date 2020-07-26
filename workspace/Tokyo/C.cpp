#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, k;
vector<ll> a;
vector<ll> table;

void count_light() {
    for (ll i=1; i<=n; i++)
    {   
        ll L, R;
        if (i-a[i]>=1) L = i-a[i];
        else L = 1;
        if (i+a[i]<=n) R = i+a[i];
        else R = n;
        
        for (ll j=L; j<=R; j++) table[j] += 1;        
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> k;
    a.resize(n+1); for (ll i=1; i<=n; i++) cin >> a[i];
    table.resize(n+1);

    for (ll time=0; time<k; time++)
    {
        for (ll i=1; i<=n; i++) table[i] = 0;
        count_light();
        for (ll i=1; i<=n; i++)
        {
            a[i] = table[i];
        }
    }

    for (ll i=1; i<=n; i++) cout << a[i] << " ";
    cout << "\n";

    return 0;
}