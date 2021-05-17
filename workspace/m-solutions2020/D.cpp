#include <bits/stdc++.h>
using namespace std;

int main() {

    long long n;
    cin >> n;
    vector<long long> a(n+10);
    for (int i = 1; i <= n; i++) cin >> a[i];

    long long kane = 1000;

    for (int i = 1; i <= n - 1; i++) {
        int kabu = 0;
        if (a[i] < a[i + 1]) kabu = kane / a[i];
        kane += (a[i + 1] - a[i]) * kabu;
    }

    cout << kane << endl;

    return 0;
}