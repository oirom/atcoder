#include <bits/stdc++.h>
using namespace std;

int main() {

    long long n;
    cin >> n;
    vector<long long> a(n);
    long long length = 0;
    for (int i = 0; i < n; i++) cin >> a[i], length += a[i];

    //cout << length << endl;

    long long l = 0, r = n - 1, count = 0;
    long long l_stick = 0, r_stick = 0;

    while (count < n) {
        if (l_stick <= r_stick) {
            l_stick += a[l];
            l++;
        } else {
            r_stick += a[r];
            r--;
        }
        count++;
    }

    cout << abs(l_stick - r_stick) << endl;

    return 0;
}