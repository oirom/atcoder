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

    string s; cin >> s;
    vector<char> v(s.size());

    int index = 0;
    for (int i=0; i<s.size(); i++)
    {
        if (s[i]=='0') { v[index] = '0'; index++; }
        else if (s[i]=='1') { v[index] = '1'; index++; }
        else if (s[i]=='B'&&index>0) index--;
    }

    for (int i=0; i<index; i++)
    {
        cout << v[i];
    }

    cout << "\n";

    return 0;
}
