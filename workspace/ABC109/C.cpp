#include<bits/stdc++.h>
using namespace std;

int gcd(int x, int y) {
  if(x % y == 0) {
    return y;
  } else {
    return gcd(y, x % y); 
    //x%y==0でないときはユーグリットの互除法を使って再帰的に関数を呼び出す。
  }
}

int main() {

  long long n, X;
  cin >> n >> X;

  vector<long long> x(n);
  for(int i = 0; i < n; i++) cin >> x[i];

  sort(x.begin(), x.end());

  vector<long long> diff(n, 0);
  for (int i = 0; i < n; i++) {
    diff[i] = abs(x[i] - X);
  }

  int ans = gcd(diff[0], diff[1]);

  for (int i = 2; i < n-1; i++) {
    ans = gcd(ans, diff[i]);
  }

  cout << ans << endl;

  return 0;
}