#include<bits/stdc++.h>
using namespace std;

int main() {
  
  int N, K, R, S, P;
  string T;
  cin >> N >> K >> R >> S >> P >> T;

  auto score = [&](int i) {
    if (T[i] == 'r') return P;
    else if (T[i] == 's') return R;
    else return S;
  };

  long long ans = 0;

  for (int k = 0; k < K; k++) {
    bool last = false;
    for (int i = k; i < N; i += K) {
      // i >= K ... i < K においてはジャンケン手の連続による制限を受けないので
      // T[i-K] == T[i] ... K個前と同じ手は出せないので
      // last ... K個前に勝った時と同じ手は出せないので
      if (i >= K && T[i-K] == T[i] && last) last = false;
      else ans += score(i), last = true;
    }
  }

  cout << ans << endl;

  return 0;
}