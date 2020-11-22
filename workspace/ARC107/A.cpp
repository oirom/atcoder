#include <bits/stdc++.h>
typedef long int li;
typedef long long ll;
using namespace std;
using Graph = vector<vector<ll>>;

const int INF = 1000000000;
vector<int> to[100005];

int main() {
    
    ll a, b, c;
    cin >> a >> b >> c;

    ll suma=(a*(a+1))/2, sumb=(b*(b+1))/2, sumc=(c*(c+1))/2;

    ll ans = 0;
    ans = ((((suma%998244353)*(sumb%998244353))%998244353)*(sumc%998244353))%998244353;

    cout << ans << endl;

    return 0;
}