#include <bits/stdc++.h>
typedef long int li;
typedef long long ll;
using namespace std;
using Graph = vector<vector<ll>>;

vector<bool> seen;

void dfs(const Graph &G, int v) {
    seen[v] = true;

    for (auto next_v : G[v]) {
        if (seen[next_v]) continue;
        dfs(G, next_v);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n, m; cin >> n >> m;
    Graph G;
    for (ll i=0; i<m; i++) {
        ll a, b; cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    seen.assign(m, false);

    dfs(G, 1);    

    return 0;
}