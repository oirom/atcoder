#include <bits/stdc++.h>
#define REP(i,n) for (int i=0; i<(n); ++i)
#define REPR(i,n,m) for (int i=(n); i>=(m); --i)
using namespace std;
using LL = long long;
using LD = long double;
using PLL = pair<long long, long long>;
using PLD = pair<long double, long double>;
using VLL = vector<long long>;
using VLD = vector<long double>;
using VPLD = vector<PLD>;

const int INF = numeric_limits<int>::max();

int main() {

    vector<int> A(3);
    cin >> A[0] >> A[1] >> A[2];

    sort(A.begin(), A.end());

    if (A[2] - A[0] == 2 * (A[1] - A[0])) cout << "Yes" << endl;
    else if (A[0]==A[1]==A[2]) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
