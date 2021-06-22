#include <bits/stdc++.h>
using namespace std;
//using Graph = vector<vector<long long>>;
//using Graph = vector<vector<char>>;
using Graph = vector<string>;
#define ll long long
#define ld long double
#define ull unsigned long long

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
vector<vector<int>> seen;

void dfs(ll x, ll y) {
  int dx[4] = {0, 1, 0, -1};  // 上下左右の移動用
  int dy[4] = {1, 0, -1, 0};

  if (x < 0 || w <= x || y < 0 || h <= y || field[y][x] == 'x') return;
  if (seen[y][x] == 1) return;

  seen[y][x] = 1;
  //count++;

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
}*/

int main() {
  h = 10;
  w = 10;

  field.assign(10, vector<char>(10,'0'));
  int num_of_o = 0;

  for (int i = 0; i < 10; i++) {
    string tmp;
    cin >> tmp;
    for (int j = 0; j < 10; j++) {
      if (tmp[j] == 'o') num_of_o++;
      field[i][j] = tmp[j];
    }
  }
  
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (field[i][j] == 'o') continue;
      int count = 0;
      seen.assign(10, vector<int>(10, 0));
      field[i][j] = 'o';
      dfs(i, j);
      for (auto e : seen) for (auto ee : e) if (ee == 1) count++;
      if (count-1 == num_of_o) { cout << "Yes" << endl; return 0; }
      field[i][j] = 'x';
    }
  }

  cout << "No" << endl;

  return 0;
}