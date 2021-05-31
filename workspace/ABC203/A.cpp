#include <bits/stdc++.h>
using namespace std;

bool compare_by_a(pair<int, int> a, pair<int, int> b) {
    if(a.first != b.first){
        return a.first < b.first;
    }else{
        return a.second < b.second;
    }
}

bool compare_by_b(pair<int, int> a, pair<int, int> b) {
    if(a.second != b.second){
        return a.second < b.second;
    }else{
        return a.first < b.first;
    }
}

template<typename T>
void printElements(T &v)
{
    cout << "[ ";
    for (const auto &item : v) {
        cout << item << ", ";
    }
    cout << "\b\b ]" << endl;
}

long long gcd(long long x, long long y) { return (x % y)? gcd(y, x % y): y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

int main() {

  long long n, k;
  cin >> n >> k;
  map<string ,long long> m;
  priority_queue<string, vector<string>, greater<string>> q;

  string a;
  long long b;
  set<string> st;

  for (int i = 0; i < n; i++) {
    cin >> a >> b;
    m[a] += b;
    st.insert(a);
  }

  for (auto x : st) {
    q.push(x);
  }

  while (!q.empty() && stoll(q.top()) <= k){
    k += m[q.top()];
    q.pop();
  }

  cout << k << endl;

  return 0;
}