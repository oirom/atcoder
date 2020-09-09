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

const int IINF = numeric_limits<int>::max();

int main() {

    int n, k;
    cin >> n >> k;
    //VLL a(n,0);
    map<string, int> m;

    REP(i,n) {
        int num;
        cin >> num;
        string tmp = to_string(num);
        if (m[tmp]==0) { m[tmp]=1;}
        else { m[tmp]+=1; }
    }

    priority_queue<int, vector<int>, greater<int>> que;

    for (auto i=m.begin();i!=m.end();i++) {
        // cout << i->first << " " << i->second << endl; 
        que.push(i->second);
    }

    int tmp_size = (int)m.size();
    int ans = 0;

    while(tmp_size>k) {
        //cout << que.top() << endl;
        ans += que.top();
        tmp_size--;
        que.pop();
    }

    cout << ans << endl;

    return 0;
}
