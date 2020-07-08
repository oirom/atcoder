#include <bits/stdc++.h>
#define rep(i,n) for (int i=0; i<(n); ++i)
using namespace std;
using LL = long long;
using PII = pair<int, int>;

const int INF = numeric_limits<int>::max();

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int r, c; cin >> r >> c;
    int sy, sx; cin >> sy >> sx;
    int gy, gx; cin >> gy >> gx;
    char M[r+1][c+1]; rep(i,r) rep(j,c) cin >> M[i+1][j+1];

    // 移動ベクトル
    vector<int> vx = {0, 1, 0, -1};
    vector<int> vy = {1, 0, -1, 0};

    // 座標[x][y]までの最短距離を格納する配列
    int dist[r+1][c+1]; fill(dist[0], dist[r], INF);

    queue<PII> q;
    q.emplace(sy, sx);
    dist[sy][sx] = 0;
    
    while ( !q.empty() ) {
        PII now = q.front();
        q.pop();

        rep(i,4) {
            int ny = now.first + vy[i], nx = now.second + vx[i];

            if ( (1<=ny && ny<=r) && (1<=nx && nx<=c) && (M[ny][nx]!='#') && (dist[ny][nx]==INF) ) {
                q.emplace(ny, nx);
                dist[ny][nx] = dist[now.first][now.second] + 1;
            }
        }
    }

    cout << dist[gy][gx] << endl;

    return 0;
}
