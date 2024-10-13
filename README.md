# 競プロ典型 90 問 
## [004 - Cross Sum（★2）](https://atcoder.jp/contests/typical90/tasks/typical90_d)
所要時間: 15 分  
要復習度: ★☆☆☆☆

2 つの for 文を使って二次元配列中のすべての要素をなめる際、行と列のどちらを固定しているのかを意識しながらコーディングする。

<details>
<summary>
回答を表示する。
</summary>

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
  int H, W;
  cin >> H >> W;
  vector<vector<int>> HW(H, vector<int>(W));
  vector<int> sum_of_row(H, 0), sum_of_column(W, 0);
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cin >> HW[i][j];
      sum_of_row[i] += HW[i][j];
      sum_of_column[j] += HW[i][j];
    }
  }

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cout << sum_of_row[i] + sum_of_column[j] - HW[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
```
</details>

## [010 - Score Sum Queries（★2）](https://atcoder.jp/contests/typical90/tasks/typical90_j)
所要時間: 15 分  
要復習度: ★★☆☆☆

配列の先頭から順に累積和を格納したのちに、指定した範囲内での合計値を算出する。簡単な例で図を書くと何をするべきかがわかりやすい。

<details>
<summary>
回答を表示する。
</summary>

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
  long long N;
  cin >> N;
  vector<long long> class_1_point(N+1, 0), class_2_point(N+1, 0);
  for (int i = 0; i < N; ++i) {
    int C, P;
    cin >> C >> P;

    if (C == 1) {
      class_1_point[i+1] = class_1_point[i] + P;
      class_2_point[i+1] = class_2_point[i];
    } else {
      class_2_point[i+1] = class_2_point[i] + P;
      class_1_point[i+1] = class_1_point[i];
    }
  }

  int Q;
  cin >> Q;
  for (int i = 0; i < Q; ++i) {
    int L, R;
    cin >> L >> R;
    cout << (class_1_point[R] - class_1_point[L-1]) << " ";
    cout << (class_2_point[R] - class_2_point[L-1]) << endl;
  }

  return 0;
}
```
</details>

## [022 - Cubic Cake（★2）](https://atcoder.jp/contests/typical90/tasks/typical90_v)
所要時間: 15 分  
要復習度: ★★☆☆☆

問題をちゃんと読む。

<details>
<summary>
回答を表示する。
</summary>

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
  long long A, B, C;
  cin >> A >> B >> C;

  long long gcd;
  gcd = greatest_common_divisor(A, B);
  gcd = greatest_common_divisor(gcd, C);

  long long ans = A / gcd + B / gcd + C / gcd - 3;
  cout << ans << endl;

  return 0;
}
```
</details>

## [024 - Select +／- One（★2）](https://atcoder.jp/contests/typical90/tasks/typical90_x)
所要時間: 30 分  
要復習度: ★★★☆☆

割り算の余りを求める際は、割られる数が負の値を取り得るかどうかに注意する。

<details>
<summary>
回答を表示する。
</summary>

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> A(N), B(N);
  for (int i = 0; i < N; i++) { cin >> A[i]; }
  for (int i = 0; i < N; i++) { cin >> B[i]; }

  vector<long long> diff(N);
  for (int i = 0; i < N; i++) { diff[i] = abs(A[i] - B[i]); }

  long long sum_of_diff = accumulate(diff.begin(), diff.end(), 0);
  if (K < sum_of_diff || (K - sum_of_diff) % 2) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }

  return 0;
}
```
</details>

## [027 - Sign Up Requests （★2）](https://atcoder.jp/contests/typical90/tasks/typical90_aa)
所要時間: 10 分  
要復習度: ★☆☆☆☆

set の contains は C++20 以降でなければ使えない。

<details>
<summary>
回答を表示する。
</summary>

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
  int N;
  cin >> N;

  set<string> usernames;
  for (int i = 1; i <= N; ++i) {
    string s;
    cin >> s;
    if (usernames.count(s) == 0) {
      cout << i << endl;
      usernames.insert(s);
    }
  }

  return 0;
}
```
</details>

## [033 - Not Too Bright（★2）](https://atcoder.jp/contests/typical90/tasks/typical90_ag)
所要時間: -- 分  
要復習度: ★★★☆☆

コーナーケースに気付けず解説 AC。問題文をよく読みましょう。

<details>
<summary>
回答を表示する。
</summary>

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
  int H, W;
  cin >> H >> W;

  int h = (H % 2 == 0) ? H / 2: H / 2 + 1;
  int w = (W % 2 == 0) ? W / 2: W / 2 + 1;

  if (H == 1 || W == 1) {
    cout << H * W << endl;
  } else {
    cout << h * w << endl;
  }

  return 0;
}
```
</details>

## [044 - Shift and Swapping（★3）](https://atcoder.jp/contests/typical90/tasks/typical90_ar)
所要時間:  120 分  
要復習度: ★★★★★

自力 AC ではあるものの時間がかかりすぎ。操作対象の配列とは別で管理するインデックス用の配列について、Ti = 2 の操作で配列の先頭が一つずつずれることを考慮する必要があるが、頭の中でうまく整理ができずに時間がかかった。

<details>
<summary>
回答を表示する。
</summary>

```cpp
#include <bits/stdc++.h>

using namespace std;

struct txy {
  int t, x, y;
};

int main() {
  int n, q;
  cin >> n >> q;
  vector<int> a(n), indicies(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    indicies[i] = i;
  }
  vector<txy> txy(q);
  for (int i = 0; i < q; i++) cin >> txy[i].t >> txy[i].x >> txy[i].y;

  int left = 0;
  vector<int> ans;
  for (int i = 0; i < q; i++) {
    int t = txy[i].t;
    int x = txy[i].x;
    int y = txy[i].y;
    x--;
    y--;

    if (t == 1) {
      x = left + x;
      if (x > n - 1) x -= ((n - 1) + 1);
      y = left + y;
      if (y > n - 1) y -= ((n - 1) + 1);

      int tmp = indicies[x];
      indicies[x] = indicies[y];
      indicies[y] = tmp;
    }

    if (t == 2) {
      left--;
      if (left < 0) left = n - 1;
    }

    if (t == 3) {
      int idx = left + x;
      if (idx > n - 1) idx -= ((n - 1) + 1);
      ans.push_back(a[indicies[idx]]);
    }
  }

  for (int i = 0; i < (int)ans.size(); i++) {
    cout << ans[i] << endl;
  }

  return 0;
}
```
</details>

## [055 - Select 5（★2）](https://atcoder.jp/contests/typical90/tasks/typical90_bc)
所要時間: 20 分  
要復習度: ★★☆☆☆

解けはしたが、nCk の実装は自力ではなくネットからのコピペなのでそこを復習する必要あり。

<details>
<summary>
回答を表示する。
</summary>

```cpp
#include <bits/stdc++.h>

using namespace std;

void recursive_comb(int *indexes, int s, int rest, std::function<void(int *)> f) {
  if (rest == 0) {
    f(indexes);
  } else {
    if (s < 0) return;
    recursive_comb(indexes, s - 1, rest, f);
    indexes[rest - 1] = s;
    recursive_comb(indexes, s - 1, rest - 1, f);
  }
}

void foreach_comb(int n, int k, std::function<void(int *)> f) {
  int indexes[k];
  recursive_comb(indexes, n - 1, k, f);
}

int main() {
  long long N, P, Q;
  cin >> N >> P >> Q;
  vector<long long> A(N);
  for (int i = 0; i < N; i++) { cin >> A[i]; }

  long long ans = 0;
  foreach_comb(N, 5, [&](int *indexes) {
    long long remainder = 1; 
    for (int i = 0; i < 5; i++) {
      remainder *= A[indexes[i]];
      remainder %= P;
    }
    if (remainder == Q) { ans++; }
  });

  cout << ans << endl;

  return 0;
}
```
</details>

## [058 - Original Calculator（★4）](https://atcoder.jp/contests/typical90/tasks/typical90_bf)
所要時間: 120 分  
要復習度: ★★★★★

時間はかかったものの自力 AC。サイクルを検知した時点で残りのループ数をサイクル長で割った余りを求めるという発想までは割とすんなり（？）進んだ。が、サイクルが始まる要素を起点にして、求めた余りの数だけ進める必要があるという点になかなか気付けなかった（ずっと index = 0 を起点に、求めた余りの数だけ進んだ場所にある要素を解としていた）。

<details>
<summary>
回答を表示する。
</summary>

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
  long long n, k;
  cin >> n >> k;

  long long cycle;
  vector<long long> i_x(100001, -1), x_i(100001, -1);

  long long x = n, i;
  for (i = 0; i < k; ++i) {
    if (x_i[x] != -1) {
      cycle = i - x_i[x];
      cout << i_x[x_i[x] + ((k - i) % cycle)] << endl;
      return 0;
    }

    i_x[i] = x;
    x_i[x] = i;

    long long x_backup = x, y = 0, z;
    while (x/10 > 0) {
      y += x%10;
      x /= 10;
    }
    y += x;
    z = (x_backup + y) % 100000;
    x = z;
  }

  cout << x << endl;

  return 0;
}
```
</details>

## [061 - Deck（★2）](https://atcoder.jp/contests/typical90/tasks/typical90_bi)
所要時間: 15 分  
要復習度: ★★☆☆☆

リストのイテレータを進めて要素を探しているのが非効率でベストではないはずなので復習する。

<details>
<summary>
回答を表示する。
</summary>

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
  int Q;
  cin >> Q;

  list<int> l;
  vector<int> ans;
  for (int i = 0; i < Q; i++) {
    int t, x;
    cin >> t >> x;
    if (t == 1) { l.push_front(x); }
    if (t == 2) { l.push_back(x); }
    if (t == 3) {
      auto it = l.begin();
      advance(it, x - 1);
      ans.push_back(*it);
    }
  }

  for (auto a : ans) cout << a << endl;

  return 0;
}
```
</details>


## [063 - Monochromatic Subgrid（★4）](https://atcoder.jp/contests/typical90/tasks/typical90_bk)
所要時間: -- 分  
要復習度: ★★★★★

解説 AC。解説を読んだうえで実装は自力。グリッドについての制約に明らかに偏りがあったたため、bit 全探索を使うことを一瞬考えたが、実装した際の計算量が見通せずに手をつけられなかった。

<details>
<summary>
回答を表示する。
</summary>

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  vector<vector<int>> grid(h, vector<int>(w));
  for (int i = 0; i < h; ++i) {
    for (int j = 0; j < w; ++j) {
      cin >> grid[i][j];
    }
  }

  int ans = 0;
  int should_appear_time = 0;
  for (int bit = 0; bit < (1 << h); ++bit) {
    map<int, int> count_full_appeared_time;
    for (int j = 0; j < w; ++j) {
      should_appear_time = 0;
      map<int, int> count_appear_time;
      for (int i = 0; i < h; ++i) {
        if (bit & (1 << i)) {
          should_appear_time++;
          count_appear_time[grid[i][j]]++;
        }
      }
      for (auto it : count_appear_time) {
        if (it.second == should_appear_time) {
          count_full_appeared_time[it.first]++;
        }
      }
    }
    for (auto it : count_full_appeared_time) ans = max(ans, it.second * should_appear_time);
  }

  cout << ans << endl;

  return 0;
}
```
</details>

## [067 - Base 8 to 9（★2）](https://atcoder.jp/contests/typical90/tasks/typical90_bo)
所要時間: -- 分  
要復習度: ★★★★☆

解説 AC。

<details>
<summary>
回答を表示する。
</summary>

```cpp
#include <bits/stdc++.h>

using namespace std;

long long base8to10(string n) {
  long long res = 0;
  long long base = 1;
  for (int i = n.size() - 1; i >= 0; --i) {
    res += (n[i] - '0') * base;
    base *= 8;
  }
  return res;
}

string base10to9(long long n) {
  string res = "";
  while (n > 0) {
    res += to_string((n % 9));
    n /= 9;
  }
  reverse(res.begin(), res.end());

  long long i = 0;
  while (res[i] == '0') { i++; }
  res.erase(0, i);

  if (res == "") res = "0";
  return res;
}

string eight_to_five(string n) {
  for (int i = 0; i < (int)n.size(); ++i) {
    if (n[i] == '8') n[i] = '5';
  }
  return n;
}

int main() {
  string N;
  int K;
  cin >> N >> K;

  string ans_str = N;
  long long ans_num;
  for (int i = 0; i < K; ++i) {
    ans_num = base8to10(ans_str);
    ans_str = base10to9(ans_num);
    ans_str = eight_to_five(ans_str);
  }

  cout << ans_str << endl;

  return 0;
}
```
</details>

## [069 - Colorful Blocks 2（★3）](https://atcoder.jp/contests/typical90/tasks/typical90_bq)
所要時間:  -- 分  
要復習度: ★★★★★

解説 AC。k × (k-1) × (k-2) × (k-2) × ... とすればよい、というところまではわかったが実装力・発想力・知識の不足で力及ばず。modpow の理解をちゃんと理解しておきましょう。

<details>
<summary>
回答を表示する。
</summary>

```cpp
#include <bits/stdc++.h>

using namespace std;

int modpow(long long base, unsigned long long exponent, int m)
{
  if (m == 1) { return 0; }

  int result = 1;
  base %= m;

  while (exponent) {
    if (exponent & 1) { result = (result * base) % m; }

    exponent >>= 1;
    base = (base * base) % m;
  }

  return result;
}

int main() {
  long long n, k;
  cin >> n >> k;

  if (n == 1) {
    cout << k << endl;
    return 0;
  }

  if (n == 2) {
    cout << k * (k - 1) << endl;
    return 0;
  }

  long long ans = k * (k - 1) % 1000000007;
  ans *= modpow(k - 2, n - 2, 1000000007);
  ans %= 1000000007; 

  cout << ans << endl;

  return 0;
}
```
</details>

## [072 - Loop Railway Plan（★4）](https://atcoder.jp/contests/typical90/tasks/typical90_bt)
所要時間: -- 分  
要復習度: ★★★★★

解説 AC。DFS がそもそも書けなかった。まずはこの問題を空で書けるようになるまで写経して DFS に慣れる。あと DFS の計算量がパッと出てこないので一度計算して導出から覚える。

<details>
<summary>
回答を表示する。
</summary>

```cpp
#include <bits/stdc++.h>

using namespace std;

long long ans = -1;

void dfs(
  long long start_y,
  long long start_x,
  long long current_y,
  long long current_x,
  long long h,
  long long w,
  vector<vector<char>> &G,
  vector<vector<bool>> &seen,
  long long dist
) {
  long long dy[4] = {1, 0, -1, 0};
  long long dx[4] = {0, 1, 0, -1};

  for (int i = 0; i < 4; i++) {
    long long next_y = current_y + dy[i];
    long long next_x = current_x + dx[i];

    if (next_y < 0 || next_y >= h || next_x < 0 || next_x >= w || G[next_y][next_x] == '#') continue;

    if (next_y == start_y && next_x == start_x && dist > 2) ans = max(ans, dist + 1);

    if (seen[next_y][next_x]) continue;

    seen[next_y][next_x] = true;
    dfs(start_y, start_x, next_y, next_x, h, w, G, seen, dist + 1);
    seen[next_y][next_x] = false;
  }
}

int main() {
  long long h, w;
  cin >> h >> w;
  vector<vector<char> > field(h, vector<char>(w));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> field[i][j];
    }
  }

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      vector<vector<bool>> seen(h, vector<bool>(w, false));
      if (field[i][j] == '.') {
        seen[i][j] = true;
        dfs(i, j, i, j, h, w, field, seen, 0);
      }
    }
  }

  cout << ans << endl;

  return 0;
}
```
</details>

## [078 - Easy Graph Problem（★2）](https://atcoder.jp/contests/typical90/tasks/typical90_bz)
所要時間: 15 分  
要復習度: ★☆☆☆☆

グラフの問題感の薄い回答になっているので、よりグラフらしく解く方法を復習する。

<details>
<summary>
回答を表示する。
</summary>

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> tmp(N, 0);
  for (int i = 0; i < M; i++) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    if (a > b) tmp[a]++;
    if (b > a) tmp[b]++;
  }

  int ans = 0;
  for (int i = 0; i < N; i++) {
    if (tmp[i] == 1) ans++;
  }

  cout << ans << endl;

  return 0;
}
```
</details>

## [085 - Multiplication 085（★4）](https://atcoder.jp/contests/typical90/tasks/typical90_cg)
所要時間: -- 分  
要復習度: ★★★★★

解説 AC。最初なぜか素因数分解をしてしまっており解けず。単純な約数列挙でいいと気付けず。整数 3 つをすべて探索する必要はなく、2 つ目まで列挙すれば自ずと 3 つ目も決まるということには気付けた。`continue` 条件の `((k / a) < b>)` と `ans++` 条件の `b <= k / (a * b)` はまだ腑に落ちていないので要復習。

<details>
<summary>
回答を表示する。
</summary>

```cpp
#include <bits/stdc++.h>

using namespace std;

vector<long long> calc_divisors(long long N) {
  vector<long long> res;

  for (long long i = 1; i * i <= N; ++i) {
    if (N % i != 0) continue;
    res.push_back(i);
    if (N / i != i) res.push_back(N / i);
  }
  sort(res.begin(), res.end());
  return res;
}

int main() {
  long long k;
  cin >> k;

  vector<long long> divisors = calc_divisors(k);

  long long ans = 0;
  for (int i = 0; i < (int)divisors.size(); i++) {
    for (int j = i; j < (int)divisors.size(); j++) {
      long long a = divisors[i];
      long long b = divisors[j];
      if ((k / a) < b) continue;
      if (k % (a * b) != 0LL) continue;
      if (b <= k / (a * b)) ans++;
    }
  }

  cout << ans << endl;

  return 0;
}
```
</details>

## [000 - Template（★0）]()
所要時間: XX 分  
要復習度: ☆☆☆☆☆

Hello, world.

<details>
<summary>
回答を表示する。
</summary>

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
  printf("Hello, world.\n")
  return 0;
}
```
</details>
