#include <bits/stdc++.h>

using namespace std;
using Graph = vector<vector<long long> >;

#define ll long long
#define ld long double
#define ull unsigned long long

const int INF = 1 << 29;
const int dx[4] = {1, 0, 1, 0};
const int dy[4] = {0, 1, 0, 1};
const long long LLINF = 1LL << 60;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

struct UnionFind {
  vector<int> par;

  UnionFind() {}
  UnionFind(int n) : par(n, -1) {}
  void init(int n) { par.assign(n, -1); }

  int root(int x) {
    if (par[x] < 0)
      return x;
    else
      return par[x] = root(par[x]);
  }

  bool issame(int x, int y) { return root(x) == root(y); }

  bool merge(int x, int y) {
    x = root(x);
    y = root(y);
    if (x == y) return false;
    if (par[x] > par[y]) swap(x, y);  // merge technique
    par[x] += par[y];
    par[y] = x;
    return true;
  }

  int size(int x) { return -par[root(x)]; }
};

vector<long long> Eratosthenes(const int N) {
  vector<bool> is_prime(N + 1);
  for (int i = 0; i <= N; i++) {
    is_prime[i] = true;
  }
  vector<long long> P;
  for (int i = 2; i <= N; i++) {
    if (is_prime[i]) {
      for (int j = 2 * i; j <= N; j += i) {
        is_prime[j] = false;
      }
      P.emplace_back(i);
    }
  }
  return P;
}

vector<pair<long long, long long>> prime_factorize(long long n) {
  vector<pair<long long, long long>> res;
  for (long long a = 2; a * a <= n; a++) {
    if (n % a != 0) continue;
    long long ex = 0;

    while (n % a == 0) {
      ex++;
      n /= a;
    }

    res.push_back({a, ex});
  }

  if (n != 1) res.push_back({n, 1});
  return res;
}

ll nCr(ll n, ll r) {
  ll num = 1;
  for (ll i = 1; i <= r; i++) num = num * (n - i + 1) / i;
  return num;
}

// 最大公約数: Greatest Common Divisor
long long greatest_common_divisor(long long x, long long y) {
  if (x % y == 0)
    return y;
  else
    return greatest_common_divisor(y, x % y);
}

// 最小公倍数: Least Common Multiple
long long least_common_multiple(long long a, long long b) {
  return a * b / greatest_common_divisor(a, b);
}

// h行w列のマップを探索するDFS
int h, w, x, y;
vector<vector<char> > field;
vector<vector<bool> > seen;

void dfs(ll x, ll y) {
  int dx[4] = {0, 1, 0, -1};  // 上下左右の移動用
  int dy[4] = {1, 0, -1, 0};

  if (x < 0 || w <= x || y < 0 || h <= y || field[y][x] == '#') return;
  if (seen[y][x]) return;

  seen[y][x] = true;

  for (int i = 0; i < 4; i++) {
    ll nx = x + dx[i];
    ll ny = y + dy[i];
    dfs(nx, ny);
  }
}

/*
  pair を要素にもつ配列のソートに使う比較関数

  How to use:
  vector<pair<ll, ll>> v = {{1, 2}, {3, 4}, {1, 3}};
  sort(v.begin(), v.end(), compare_by_first);
*/
bool compare_by_first(pair<long long, long long> a, pair<long long, long long> b) {
  if (a.first != b.first) {
    return a.first < b.first; // 昇順
    //return a.first > b.first; // 降順
  }
  if (a.second != b.second) {
    return a.second < b.second;
  } else {
    return true;
  }
}

bool compare_by_second(pair<long long, long long> a, pair<long long, long long> b) {
  if (a.second != b.second) {
    return a.second < b.second; // 昇順
    //return a.second > b.second; // 降順
  }
  if (a.first != b.first) {
    return a.first < b.first;
  } else {
    return true;
  }
}

void warshall_floyd(int n) {
  for (int k = 0; k < n; k++) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
      // d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
      }
    }
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
      // if (d[i][j] < INF) ans += d[i][j];
      }
    }
  }
}

void recursive_comb(long long *indexes, long long s, long long rest, std::function<void(long long *)> f) {
  if (rest == 0) {
    f(indexes);
  } else {
    if (s < 0) return;
    recursive_comb(indexes, s - 1, rest, f);
    indexes[rest - 1] = s;
    recursive_comb(indexes, s - 1, rest - 1, f);
  }
}

/*
  nCkの組み合わせを列挙する
  n: 全体の要素数
  k: 選ぶ要素数
  f: 処理内容

  How to use:
  foreach_comb(3, 2, [&](int *indexes) {
    cout << indexes[0] << " " << indexes[1] << endl;
    // > 0 1
    // > 0 2 
    // > 1 2
  });
*/
void foreach_comb(long long n, long long k, std::function<void(long long *)> f) {
  long long indexes[k];
  recursive_comb(indexes, n - 1, k, f);
}

/*
  mod(base^exponent, divisor) を計算する
  base    : 底
  exponent: 指数
  divisor : 除数

  How to use:
  cout << modpow(2, 10, 1000000007) << endl;
*/
long long modpow(long long base, unsigned long long exponent, long long divisor) {
  if (divisor == 1) { return 0; }

  long long result = 1;
  base %= divisor;
  while (exponent) {
    if (exponent & 1) { result = (result * base) % divisor; }
    exponent >>= 1;
    base = (base * base) % divisor;
  }

  return result;
}

/* dfs 用 */
long long ans_for_dfs = -1;
/*
  dfs
  start_y: スタート地点のy座標
  start_x: スタート地点のx座標
  current_y: 現在地のy座標
  current_x: 現在地のx座標
  h: マップの縦幅
  w: マップの横幅
  G: マップ
  seen: 訪れたかどうかのフラグ
  dist: 移動距離

  How to use:
  vector<vector<bool>> seen(h, vector<bool>(w, false));
  seen[start_y][start_x] = true;
  dfs(start_y, start_x, current_y, current_x, h, w, G, seen, 0);
*/
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

    if (next_y == start_y && next_x == start_x && dist > 2) ans_for_dfs = max(ans_for_dfs, dist + 1);

    if (seen[next_y][next_x]) continue;

    seen[next_y][next_x] = true;
    dfs(start_y, start_x, next_y, next_x, h, w, G, seen, dist + 1);
    seen[next_y][next_x] = false;
  }
}

/*
  約数列挙
*/
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
