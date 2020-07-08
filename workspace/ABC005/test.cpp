#include <bits/stdc++.h>
#define rep(i,n) for (int i=0; i<(n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    for (int i=0; i<5; i++) {
        for (int j=0; j<3; j++) {
            if (j==1) break;
            cout << i << " " << j << endl;
        }
    }

    return 0;
}
