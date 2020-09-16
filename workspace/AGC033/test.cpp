#include <bits/stdc++.h>
using namespace std;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int main(){

    int r, c, sy, sx, gy, gx;
    cin >> r >> c >> sy >> sx >> gy >> gx;
    sy--, sx--, gy--, gx--;
    vector<string> v(r);
    for (int i=0; i<r; i++) cin >> v[i];

    vector<vector<int>> dist(r, vector<int>(c, -1));
    dist[sy][sx] = 0;
    queue<pair<int, int>> que;
    que.push(pair<int, int>(sy, sx));

    while(!que.empty()) {
        auto cur = que.front();
        for (int i=0; i<4; i++) {
            int ny = cur.first + dy[i];
            int nx = cur.second + dx[i];
            if (ny<0 || ny>=r || nx<0 || nx>=c) continue;
            if (dist[ny][nx]==-1 && v[ny][nx]=='.') {
                dist[ny][nx] = dist[cur.first][cur.second] + 1;
                que.push(pair<int, int>(ny, nx));
            }
        }
        que.pop();
    }

    cout << dist[gy][gx] << endl;

    return 0;
}