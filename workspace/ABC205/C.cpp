#include<bits/stdc++.h>
using namespace std;

int main() {

  signed long long a, b, c;
  cin >> a >> b >> c;

  long long aa = a, bb = b;
  if (abs(aa) == abs(bb)) a = 1, b = 1;
  else if (abs(aa) > abs(bb)) a = 2, b = 1;
  else if (abs(aa) < abs(bb)) a = 1, b = 2;
  
  if (aa < 0)  a *= -1;
  if (bb < 0)  b *= -1;

  c %= 2;
  if (c == 0) c = 2;

  if (pow(a,c) > pow(b,c)) cout << '>' << endl;
  if (pow(a,c) < pow(b,c)) cout << '<' << endl;
  if (pow(a,c) == pow(b,c)) cout << '=' << endl;

  return 0;
}