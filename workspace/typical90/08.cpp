#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  string S;
  cin >> S;

  vector<vector<long long>> vv(N, vector<long long>(7, 0));
  for (int i = 0; i < N; i++) {
    if (S[i] == 'a') vv[i][0]++;
    if (S[i] == 't') vv[i][1]++;
    if (S[i] == 'c') vv[i][2]++;
    if (S[i] == 'o') vv[i][3]++;
    if (S[i] == 'd') vv[i][4]++;
    if (S[i] == 'e') vv[i][5]++;
    if (S[i] == 'r') vv[i][6]++;
  }

  return 0;
}