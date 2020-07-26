#include <bits/stdc++.h>

using namespace std;
using Graph = vector<vector<int>>;

// 深さ優先探索
vectro<bool> seen;
void dfs(const Graph &G, int v) {
    seen[v] = true; // v を訪問済にする

    // v からいける各頂点 next_v について
    for (auto next_v : G[v]) {
        if (seen[next_v]) continue; // next_v が探索済だったらスルー
        dfs(G, next_v);
    }
}

int main() {
    // 頂点数と変数
    int N, M; cin >> N >> M;

    // グラフ入力受け取り（無向グラフを想定）
    for (int i=0; i<M; ++i) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    // 頂点 0 をスタートとした探索
    seen.assign(N, false);
    dfs(G, 0);
}