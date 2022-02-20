#include<bits/stdc++.h>
using namespace std;

int main() {

  long long n;
  cin >> n;

  vector<long double> a(n);

  for (int i=0;i<n;i++) cin >> a[i];

  sort(a.begin(), a.end());

  long double med = 0;

  if ( n % 2 == 1 ) med = a[(n-1)/2];
  else med = (a[(n/2)-1] + a[n/2])/2;

  med /= 2.0;

  long double ans = 0;
  
  for (int i=0;i<n;i++) {
    //printf("%f + %f - %f =\n", med, a[i], min(a[i], 2*med));
    ans += ( med + a[i] - min(a[i], 2*med) );
  }

  cout << fixed;
  cout << setprecision(20) << ans / n << endl;

  return 0;

}