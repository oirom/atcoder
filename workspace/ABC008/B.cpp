#include <bits/stdc++.h>
#define REP(i,n) for (int i=0; i<(n); ++i)
using namespace std;
using LL = long long;
using PII = pair<int, int>;

const int INF = numeric_limits<int>::max();

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;

    map<string, int> mp;
    set<string> st;

    REP(i,n) {
        string s;
        cin >> s;
        mp[s]++;
        st.insert(s);
    }

    int tmp_max = -1;
    string tmp;
    for (auto x : st) {
        if (tmp_max < mp[x]) {
            tmp_max = mp[x];
            tmp = x;
            }
    }

    cout << tmp << endl;

    return 0;
}
