#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll sum(ll l, ll r) {
    return (l+r)*(r-l+1)/2;
}

int main() {

    long long mod = 1000000007;

    long long n, k; cin >> n >> k;

    long long ans;

    for (long long i=k; i<=n+1; i++){
        ll l = sum(0,i-1), r = sum(n-i+1,n);
        ans += r-l+1;
    }
    

    cout << ans%mod << "\n";

    return 0;
}