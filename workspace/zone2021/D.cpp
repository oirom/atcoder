#include<bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  vector<char> t;

  bool f = true; // true: no reverse, false: reverse

  int cnt = 0;

  for (int i = 0; i < (int)s.size(); i++) {
    
  if (s[i] == 'R') f = !f;
    else {
      cnt++;
      if (f) t.push_back(s[i]);
      else   t.insert(t.begin(),s[i]);
    }
  }

  if (!f) reverse(t.begin(), t.end());

  string T;

  for(char c : t){
    cout << c << endl;
    if(T.size() && T.back() == c) T.pop_back();
    else T.push_back(c);
  }

  cout << T << endl;

  return 0;
}