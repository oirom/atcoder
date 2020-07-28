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

    string x;
    cin >> x;

    stack<char> st;

    for (int i=0; i<x.size(); i++)
    {
        if ((x[i]=='T')&&(st.empty()||st.top()=='T')) st.push(x[i]);
        else if ((x[i]=='T')&&(st.top()=='S')) st.pop();
        else if ((x[i]=='S')) st.push(x[i]);
    }

    cout << st.size() << endl;

    return 0;
}
