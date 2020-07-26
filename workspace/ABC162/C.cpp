#include <bits/stdc++.h>

#define rep(i,n) for(int i=1; i<=n; i++)
using namespace std;

unsigned eu_gcd(unsigned a, unsigned b) {
  while(1) {
    if(a < b) swap(a, b);
    if(!b) break;
    a %= b;
  }
  return a;
}

int main() {

    long int K, g1, g2, sum=0;
    cin >> K;

    rep(a,K) {
        rep(b,K) {
            g1 = eu_gcd(a,b);
            rep(c,K) {
                g2 = eu_gcd(g1, c);
                sum += g2;
            }
        }
    }

    cout << sum << endl;

    return 0;
}