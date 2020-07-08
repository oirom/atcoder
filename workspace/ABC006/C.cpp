#include <bits/stdc++.h>
#define rep(i,n) for (int i=0; i<(n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m; cin >> n >> m;

    /*

    (1) : a + b + c = n
    (2) : 2a + 3b + 4c = m
    
    (1)': b = n - a - c
    (3) : (2) <- (1)' 
        : 2a + 3(n-a-c) + 4c = m
        : 3n - a + c = m
    (4) : a = c + 3n - m
    (5) : (1) <- (4)
        : c + 3n - m + b + c = n
        : 2n - m + b + 2c = 0
        : b = m - 2n - 2c
    
    */

    for (int c=0; c<=n; c++) {
        int a = c + 3*n -m;
        int b = m - 2*n - 2*c;
        if (a>=0&&b>=0&&c>=0&&a+b+c==n&&2*a+3*b+4*c==m) {
            cout << a << " " << b << " " << c << endl;
            return 0;
        }
    }

    cout << "-1 -1 -1" << endl;

    return 0;
}
