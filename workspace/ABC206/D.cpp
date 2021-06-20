#include <bits/stdc++.h>
using namespace std;

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

int main() {
  long long n;
  cin >> n;
  vector<long long> a(n + 1, 0);
  set<long long> st;
  for (int i = 1; i <= n; i++) { cin >> a[i]; st.insert(a[i]); }

  UnionFind uf(200200);

  for (int i = 1; i <= n + 1 - i; i++) {
    if (a[i] != a[n + 1 - i]) uf.merge(a[i], a[n + 1 - i]);
    
  }

  set<long long> ngr;
  
  for (auto x : st) {
    //cout << x << endl;
    ngr.insert(uf.root(x));
  }
  cout << (int)st.size() - (int)ngr.size() << endl;

  return 0;
}