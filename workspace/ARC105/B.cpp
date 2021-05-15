#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y) {
    if(x % y == 0) {
        return y;
    } else {
        return gcd(y, x % y); 
        //x%y==0でないときはユーグリットの互除法を使って再帰的に関数を呼び出す。
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n,0);
    for (int i=0; i<n; i++) cin >> a[i];
    
    int ans;
    for (int i=0; i<n; i++) {
        //int ans;
        if (i == 0) ans = a[i];
        else ans = gcd(ans, a[i]);
    }

    cout << ans << endl;

    return 0;
}