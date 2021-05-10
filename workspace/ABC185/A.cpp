#include <bits/stdc++.h>
using namespace std;

bool is_integer( long double x ) {
    return floor(x) == x;
}

int main() {

    vector<int> A(4);
    for (int i = 0; i<4;i++ ) cin >> A[i];

    sort(A.begin(), A.end());

    cout << A[0] << endl;

    return 0;
}