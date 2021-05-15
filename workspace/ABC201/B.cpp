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

bool compare_by_b(pair<string, int> a, pair<string, int> b) {
    if(a.second != b.second){
        return a.second < b.second;
    }else{
        return a.first < b.first;
    }
}

int main() {

    int n;
    cin >> n;
    //vector<string> s(n);
    //vector<int> t(n);
    vector< pair<string, int> > st(n);
    for (int i=0; i<n; i++) {
        cin >> st[i].first >> st[i].second;
    }

    sort(st.begin(), st.end(), compare_by_b);

    cout << st[(int)st.size()-2].first << endl;

    return 0;
}
