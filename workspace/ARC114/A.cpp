#include <bits/stdc++.h>
using namespace std;
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

int gcd(int x, int y) {
  if (x % y == 0)
    return y;
  else
    return gcd(y, x % y);
}

int lcm(int a, int b) { return a * b / gcd(a, b); }

int main() {
  int n;
  cin >> n;
  vector<ll> x(n);
  for (int i = 0; i < n; i++) cin >> x[i];

  long long ans = 1000000000000000000;
  vector<ll> tmp = Eratosthenes(50);
  for (int bit = 0; bit < (1ll << 15); bit++) {
    ll res = 1;
    for (int i = 0; i < 15; i++) if (bit & (1 << i)) res *= tmp[i];
    for (int i = 0; i < n; i++) {
      if (gcd(res, x[i]) == 1) break;
      if (i == n - 1) ans = min(ans, res);
    }
  }

  cout << ans << endl;

  return 0;
}