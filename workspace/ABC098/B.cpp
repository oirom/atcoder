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

int count_dup(string s1, string s2) {
    string tmp;
    //cout << s1 << " " << s2 << endl;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    s1.erase(unique(s1.begin(), s1.end()), s1.end());
    s2.erase(unique(s2.begin(), s2.end()), s2.end());
    //cout << s1 << " " << s2 << endl;
    if ((int)s1.size() < (int)s2.size()) {
        tmp = s1;
        s1 = s2;
        s2 = tmp;
    }

    int numDup = 0;

    for (int i = 0; i < (int)s2.size(); i++) {
        if (s1.find(s2[i]) != string::npos) numDup++;
    }

    //cout << numDup << endl;

    return numDup++;
}

int main() {

    int n;
    cin >> n;
    string s;
    cin >> s;

    int ans = 0;

    for (int i = 1; i < (int)s.size(); i++) {
        int tmp = count_dup(s.substr(0,i), s.substr(i,(int)s.size()-i));
        ans = max(tmp, ans);
    }
    
    cout << ans << endl;

    return 0;
}