#include<bits/stdc++.h>
using namespace std;

string binary(int bina){
  int ans = 0;
  for (int i = 0; bina>0 ; i++)
  {
    ans = ans+(bina%2)*pow(10,i);
    bina = bina/2;
  }
  return to_string(ans);
}

int main() {

  int n, _start, _end;
  cin >> n >> _start >> _end;
  string start = binary(_start);
  string end   = binary(_end);
  vector<string> stone(n);
  for (int i = 0; i < n; i++) {
    int s;
    cin >> s;
    stone[i] = binary(s);
  }

  cout << start << endl;
  cout << ~start   << endl;

  return 0;
}