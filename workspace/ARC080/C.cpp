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
    ios::sync_with_stdio(false);
    cin.tie(0);

    LL n; cin >> n;
    VLL a(n); REP(i,n) cin >> a[i];
    VLL v(n,0);

    LL counter = 0, counter2 = 0;
    REP(i,n) {
        if (a[i]%4==0) counter++;
        else if ((a[i]%4!=0)&&(a[i]%2==0)) counter2++;
    }
    counter2 = counter2/2;

    LL needs = 0;
    if (n%2==1) needs = (n-1)/2;
    else needs = (n/2);

    if (needs<=(counter+counter2)) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}