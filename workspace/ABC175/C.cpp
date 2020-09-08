#include <bits/stdc++.h>
#define REP(i,n) for (int i=0; i<(n); ++i)
#define REPR(i,n,m) for (int i=(n); i>=(m); --i)
using namespace std;
using LL = long long;
using SLL = signed long long;
using LD = long double;
using PLL = pair<long long, long long>;
using PLD = pair<long double, long double>;
using VLL = vector<long long>;
using VLD = vector<long double>;
using VPLL = vector<PLL>;
using VPLD = vector<PLD>;

const int INF = numeric_limits<int>::max();
const unsigned long long int ULLINF = numeric_limits<unsigned long long int>::max();

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    signed long long x;
    signed long long k, d;
    cin >> x >> k >> d;

    signed long long pre_x = x+1;
    signed long long count = 0;

    while (llabs(pre_x)>llabs(x)) {
        if (x<=0) { count++; pre_x=x; x+=d; }
        else if (x>=0) { count++; pre_x=x; x-=d;}
    }

    cout << x << endl;
    cout << count << endl;

    return 0;
}
