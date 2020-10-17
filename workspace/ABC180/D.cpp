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
using VPLL = vector<PLL>;
using VPLD = vector<PLD>;

int main() {

    unsigned long long x, y, a, b;
    cin >> x >> y >> a >> b;

    unsigned long long ex = 0;

    while ((x*a-x)<=b && (x*a)<y) {
        x = x*a;
        ex++;
    }
    
    ex += ((y-1)-x)/b;

    cout << ex << endl;

    return 0;
}
