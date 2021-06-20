#include<bits/stdc++.h>
using namespace std;

struct UnionFind {
    vector<int> par;
    
    UnionFind(int n) : par(n, -1) { }
    void init(int n) { par.assign(n, -1); }
    
    int root(int x) {
        if (par[x] < 0) return x;
        else return par[x] = root(par[x]);
    }
    
    bool issame(int x, int y) {
        return root(x) == root(y);
    }
    
    bool merge(int x, int y) {
        x = root(x); y = root(y);
        if (x == y) return false;
        if (par[x] > par[y]) swap(x, y); // merge technique
        par[x] += par[y];
        par[y] = x;
        return true;
    }
    
    int size(int x) {
        return -par[root(x)];
    }
};

int main() {

  long long n, m;
  cin >> n >> m;

  UnionFind uf(n);
  for (int i = 0; i < m; i++) {
    long long a, b;
    cin >> a >> b;
    a--; b--;
    uf.merge(a,b);
  }

  set<long long> st;
  for (int i = 0; i < n; i++) st.insert(uf.root(i));

  cout << (int)st.size() - 1 << endl;

  return 0;
}