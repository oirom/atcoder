#include<bits/stdc++.h>
using namespace std;

int main() {

  string s;
  cin >> s;
  vector<int> v(26,0);
  
  if (s == "zyxwvutsrqponmlkjihgfedcba") {cout << -1 << endl; return 0;}

  for (int i = 0; i < (int)s.size(); i++) {
    v[(int)(s[i] - '0') - 49] += 1;
  }

  if ((int)s.size() < 26) {
    cout << s;
    int i = 0;
    while(v[i] == 1) i++;
    cout << char('a' + i) << endl;
    return 0;
  }

  priority_queue<char, vector<char>, greater<char>> alp;

  int i;
  for (i = 25; i > 0; i--) {
    if (s[i-1] < s[i]) break;
    else alp.push(s[i]);
  }
  
  if (alp.empty()) cout << s.substr(0, i-1) << s[i] << endl;

  else {
    while (!alp.empty()) {
      if (s[i-1] < alp.top()) break;
      alp.pop();
    }
    cout << s.substr(0, i-1) << alp.top() << endl;
  }

  return 0;
}