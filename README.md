# ここは？
競技プログラミング（主にAtCoder）のコード管理のためのリポジトリ

# アルゴリズム覚書
勉強したアルゴリズムやプログラミングテクニックについてメモしていきます．

## 素数判定 : is_prime
引数 N が素数か否かを判定し，真偽値を返します．
```cpp
bool is_prime(long long N) {
        if (N == 1) return false;
        for (int i=2; i*i<=N; i++) {
            if (N%i==0) return false;
        }
        return true;
}
```

## 素因数分解 : prime_factorize
引数 N を素因数分解し，ベクトル形式で返します．

例として以下の素因数分解の場合，

```math
180 = 2^2 + 3^2 + 5^1
```
返り値は以下のようになります．
```
[(2,2), (3,2), (5,1)]
```

```cpp
vector<pair<long long, long long>> prime_factorize(long long N) {
    vector<pair<long long, long long>> res;
    for (int a=2; a*a<=N; a++) {
        if (N%a != 0) continue;
        ll ex = 0; // 指数

        while (N%a == 0) {
            ex++;
            N /= a;
        }
        
        res.push_back({a, ex});
    }

    if (N != 1) res.push_back({N, 1});
    return res;    
}
```

## 幅優先探索 : bfs
幅を優先して探索します．
２次元マップを移動するときのコスト計算や最短経路の計算に有用．
```cpp
// このようなマップにおいて'#'に隣接する'.'を'#'に置き換えることを考える
// 最小で何度の置き換えを行えばよいか？
// ... 
// .#. 
// ...

int h, w;           // マップの縦，横の大きさ
vector<string> m;   // マップ

int dx[4] = {0, 1, 0, -1}; // 上下左右の移動用
int dy[4] = {1, 0, -1, 0};

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
```
