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
    
    int a, b ,c;
    cin >> a >> b >> c;

    set<int> st;
    st.insert(a);
    st.insert(b);
    st.insert(c);

    cout << ( (int)st.size() == 2 ? "Yes" : "No" ) << endl;
    
    return 0;
}
