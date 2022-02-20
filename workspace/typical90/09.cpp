#include <bits/stdc++.h>

using namespace std;
using Graph = vector<vector<long long>>;

#define ll long long
#define ld long double
#define ull unsigned long long

const int INF = 1 << 29;
const int dx[4] = {1, 0, 1, 0};
const int dy[4] = {0, 1, 0, 1};

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

vector<pair<ll, ll>> prime_factorize(ll N) {
  vector<pair<ll, ll>> res;
  for (ll a = 2; a * a <= N; a++) {
    if (N % a != 0) continue;
    ll ex = 0;  // 指数

    while (N % a == 0) {
      ex++;
      N /= a;
    }

    res.push_back({a, ex});
  }

  if (N != 1) res.push_back({N, 1});
  return res;
}

ll nCr(ll n, ll r) {
  ll num = 1;
  for (ll i = 1; i <= r; i++) num = num * (n - i + 1) / i;
  return num;
}

ll gcd(ll x, ll y) {
  if (x % y == 0)
    return y;
  else
    return gcd(y, x % y);
}

ll lcm(ll a, ll b) { return a * b / gcd(a, b); }

// h行w列のマップを探索するDFS
int h, w, x, y;
vector<vector<char>> field;
vector<vector<bool>> seen;

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
int main() {
  cin >> h >> w;
  c.resize(h, vector<char>(w));
  seen.resize(h, vector<bool>(w, false));

  int startx, starty, goalx, goaly;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> c[i][j];
      if (c[i][j] == 's') startx = j, starty = i;
      if (c[i][j] == 'g') goalx = j, goaly = i;
    }
  }

  dfs(startx, starty);

  if (reached[goaly][goalx])
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}
*/

bool compare_by_first(pair<ll, ll> a, pair<ll, ll> b) {
  if(a.first != b.first) {
    return a.first < b.first; // 昇順
    //return a.first > b.first; // 降順
  }
  if(a.second != b.second) {
    return a.second < b.second;
  } else {
    return true;
  }
}

bool compare_second(pair<ll, ll> a, pair<ll, ll> b) {
  if(a.second != b.second) {
    return a.second < b.second; // 昇順
    //return a.second > b.second; // 降順
  }
  if(a.first != b.first) {
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

ll N;
struct Point {
  double px, py;
};
Point G[2009];

double solve(int pos) {
  vector<double> vec;
  for (int i=1;i<=N;i++) {
    if (i == pos) continue;
    Point SA = G[i] - G[pos];
    double angle = getangle(SA);
    vec.push_back(angle);
  }
  sort(vec.begin(), vec.end());

  double ret = 0.0;
  for (int i=0;i<vec.size();i++) {
    double target = vec[i] + 180;
    if (target >= 360) target -= 360;
    int pos1 = lower_bound(vec.begin(), vec.end(), target) - vec.begin();
  }
}

double solve_Fast() {
  double Answer = 0.0;
  for (int i=1;i<=N;i++) {
    double ret = solve(i);
    Answer = max(Answer, ret);
  }
  return Answer;
}

int main() {

  cin >> N;
  for (int i=1;i<=N;i++) cin >> G[i].px >> G[i].py;

  double FinalAns = solve_Fast();
  return 0;
}