#include <bits/stdc++.h>
typedef long int li;
typedef long long ll;
using namespace std;
using Graph = vector<vector<ll>>;

const int INF = 1000000000;
vector<int> to[100005];

int main() {
    
    int n, m;
    cin >> n >> m;
    for (int i=0; i<m; i++) {
        int a, b;
        cin >> a >> b;
        --a; --b;
        to[a].push_back(b);
        to[b].push_back(a);
    }

    queue<int> q;
    vector<int> dist(n, INF);
    vector<int> pre(n, -1);
    dist[0] = 0;
    q.push(0);
    while(!q.empty()) {
        int v = q.front(); q.pop();
        for (int u: to[v]) {
            if (dist[u] != INF) continue;
            dist[u] = dist[v] + 1;
            pre[u] = v;
            q.push(u);
        }
    }

    cout << "Yes" << endl;
    for (int i=0; i<n; i++) {
        if (i == 0) continue;
        int ans = pre[i];
            ++ans;
        cout << ans << endl;
    }

    return 0;
}