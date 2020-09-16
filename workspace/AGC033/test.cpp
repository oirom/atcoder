#include <bits/stdc++.h>
using namespace std;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int h, w;
vector<string> m;

int bfs() {

    vector<vector<int>> cost(h, vector<int>(w, -1));
    queue<pair<int, int>> que;

    for (int i=0; i<h; i++) {
        for (int j=0; j<w; j++) {
            if (m[i][j]=='#') {
                que.push(pair<int, int>(i, j));
                cost[i][j] = 0;
            }
        }
    }

    while (!que.empty()) {
        auto cur = que.front();
        que.pop();
        for (int i=0; i<4; i++) {
            int ny = cur.first + dy[i];
            int nx = cur.second + dx[i];
            if (ny < 0 || ny >= h || nx < 0 || nx >= w || m[ny][nx] == '#') continue;
            if (cost[ny][nx] == -1 && m[ny][nx] == '.') {
                cost[ny][nx] = cost[cur.first][cur.second] + 1;
                que.push(pair<int, int>(ny, nx));
            }
        }
    }

    int ans = 0;
    for (int i=0; i<h; i++){
        for (int j=0; j<w; j++) {
            ans = max(ans, cost[i][j]);
        }
    }

    return ans;
}

int main(){
    
    cin >> h >> w;
    m.resize(h);
    for (int i=0; i<h; i++) cin >> m[i];
    
    cout << bfs() << endl;

    return 0;
}