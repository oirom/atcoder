#include<bits/stdc++.h>
using namespace std;

long long MOD = 1000000000 + 7;

long long fact(long long a){
  long long ans = 1;
  while(a > 0){
      ans *= a;
      ans %= MOD;
      a--;
  }
  return ans;
}


int main() {

  long long n, m;
  cin >> n >> m;

  if (abs(n-m)>1) {
    cout << 0 << endl;
    return 0;
  }

  long long pn = fact(n);
  long long pm = fact(m);
  //cout << pn << " " << pm << endl;
  
  if ( n == m ) cout << (2 * pn * pm) % MOD<< endl;
  else cout << (pn * pm) % MOD << endl;

  return 0;
}