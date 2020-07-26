#include <bits/stdc++.h>
#define REP(i,n) for (int i=0; i<(n); ++i)
using namespace std;
using LL = long long;
using PII = pair<int, int>;
using VLL = vector<long long>;

const int INF = numeric_limits<int>::max();

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    priority_queue<int> que;

    int a;
    REP(i,n) {
        cin >> a;
        que.push(a);
    }

    int tmp = que.top();
    REP(i,n) {
        que.pop();
        if (que.top()!=tmp) { cout << que.top() << endl; return 0; }
        tmp = que.top();
    }
    
    return 0;
}
