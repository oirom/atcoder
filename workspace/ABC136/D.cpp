#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<long long>>;
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

bool my_compare(pair<ll, ll> a, pair<ll, ll> b) {
  if(a.second != b.second) {
    return a.second < b.second; // 昇順
    //return a.second > b.second; // 降順
  }
  if(a.first != b.first) {
    return a.first < b.first;
  } else {
    return true;
  }
  /*
  if(a.first != b.first) {
    return a.first < b.first; // 昇順
    //return a.first > b.first; // 降順
  }
  if(a.second != b.second) {
    return a.second < b.second;
  } else {
    return true;
  }
  */
}

int main() {

  string s;
  cin >> s;
  ll n = (ll)s.size();
  vector<ll> v(n, 0), w(n, 0);

  ll tmp = 0;
  for (ll i = 0; i < n; i++) {
    if (s[i] == 'R') tmp++;
    if (s[i] == 'L') { 
      if (tmp%2==0) {
        v[i] += tmp/2;
        v[i-1] += tmp/2;
      } else {
        v[i] += tmp/2;
        v[i-1] += tmp/2+1;
      }
      tmp = 0;
    }
  }

  tmp = 0;
  for (ll i = n-1; i >= 0; i--) {
    if (s[i] == 'L') tmp++;
    if (s[i] == 'R') { 
      if (tmp%2==0) {
        w[i] += tmp/2;
        w[i+1] += tmp/2;
      } else {
        w[i] += tmp/2;
        w[i+1] += tmp/2+1;
      }
      tmp = 0;
    }
  }

  for (ll i = 0; i < n; i++) cout << v[i]+w[i] << " ";
  cout << endl;

  return 0;
}