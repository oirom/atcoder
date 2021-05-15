#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

// 四方向への移動ベクトル
const int dx[2] = {1, 0};
const int dy[2] = {0, 1};

// 入力
int H, W;
vector<string> field;

// 探索
bool seen[2000][2000]; // seen[h][w] := マス (h, w) が検知済みかどうか

void dfs(int h, int w) {
    seen[h][w] = true;

    // 四方向を探索
    for (int dir = 0; dir < 2; ++dir) {
        int nh = h + dx[dir];
        int nw = w + dy[dir];

        // 場外アウトしたり、移動先が壁の場合はスルー
        if (nh < 0 || nh >= H || nw < 0 || nw >= W) continue;
        //if (field[nh][nw] == '#') continue;

        // 移動先が探索済みの場合
        if (seen[nh][nw]) continue;

        // 再帰的に探索
        dfs(nh, nw);
    }
}

int main() {
    // 入力受け取り
    cin >> H >> W;
    field.resize(H);
    for (int h = 0; h < H; ++h) cin >> field[h];

    // s と g のマスを特定する
    sh = 0, sw = 0;
    gh = H - 1, gw = W - 1;
    
    // 探索開始
    memset(seen, 0, sizeof(seen)); // seen 配列全体を false に初期化
    dfs(sh, sw);

    // 結果
    if (seen[gh][gw]) cout << "Yes" << endl;
    else cout << "No" << endl;
}