#include <bits/stdc++.h>
using namespace std;
#define MAX_N 100100
#define pb push_back
vector<int> g[MAX_N];
int N, M, root=0, parent[MAX_N], depth[MAX_N];

void dfs(int v, int p, int d)
{
    depth[v] = d;
    cout << v << ": " << depth[v] << endl;

    for (int i=0; i<g[v].size(); i++)
    {
        if (g[v][i]==p) continue;
        dfs(g[v][i], v, d+1);
    }
}

void add_edge(int u, int v)
{
    g[u].pb(v);
    g[v].pb(u);
}

int main() {
    
    cin >> N;
    for (int i=0; i<N; i++)
    {
        int u, v;
        cin >> u >> v;
        add_edge(u, v);
    }
    dfs(root, -1, 0);

    return 0;
}