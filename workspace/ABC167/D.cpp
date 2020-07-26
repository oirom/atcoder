#include <bits/stdc++.h>
using namespace std;
typedef long int li;
typedef unsigned long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n, k; cin >> n >> k;

    vector<ll> a(n+10, 0); for (ll i=1; i<=n; i++) cin >> a[i];
    vector<ll> pre_list(n+10, 0); pre_list[1] = 1; 

    ll tmp = 1, counter = 0;

    if (k>n) {
        while (pre_list[a[tmp]]!=1) pre_list[a[tmp]]=1, tmp=a[tmp], counter += 1;

        if (a[tmp] == tmp){
            cout << tmp << "\n";
        }

        else {
            cout << counter << "\n";
            k = k%(counter+1);
            cout << k << "\n";

            ll new_k = a[tmp] - tmp 
            for (ll i=0; i<k; i++)
            {
                tmp = a[tmp];
            }
        }
    }

    else {
        for (ll i=1; i<=k; i++)
        {
            tmp = a[tmp];
        }
    }
    
    cout << tmp << "\n";

    return 0;
}