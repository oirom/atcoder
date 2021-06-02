#include <bits/stdc++.h>
using namespace std;

int main() {

    long long x, y;
    cin >> x >> y;

    long long count = 1;

    while (2 * x <= y) {
        x *= 2;
        count++;
    }

    cout << count << endl;

    return 0;
}