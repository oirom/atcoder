#include <bits/stdc++.h>

#define rep(i,n) for(int i=0; i<n; i++)

using namespace std;

int main() {

    long int N; cin >> N;

    long int ans = 0;

    rep(i,N) ans += i;

    cout << ans << endl;
    
    return 0;
}
