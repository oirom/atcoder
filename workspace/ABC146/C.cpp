#include<bits/stdc++.h>
using namespace std;

long long calc( long long a, long long b, long long n ) {

  string tmp = to_string(n);
  return a * n + b * (long long)tmp.size();

}

int main() {

  long long a, b, x;
  cin >> a >> b >> x;

  long long left = -1, right = 1000000000 + 1;
  while (right - left > 1) {
    long long mid = left + (right - left) / 2;
    long long tmp = calc(a, b, mid);
    if (x <  tmp) right = mid;
    if (x >= tmp) left  = mid;
    //cout << left << endl;
  }

  cout << (left == -1 ? 0 : left) << endl;

  return 0;
}