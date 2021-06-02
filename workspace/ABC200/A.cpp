#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int ans = 0;

    if (N%100==0) {
        cout << N/100 << endl;
        return 0;
    }

    for (int i=1; i<=30; i++) {
        if (N>=100*i) ans++;
    }
    cout << ans + 1<< endl;

    return 0;
}