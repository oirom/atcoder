#include <bits/stdc++.h>
using namespace std;

int dx[8] = {1, 0, -1, 0, 1, 1, -1, -1};
int dy[8] = {0, 1, 0, -1, 1, -1, 1, -1};

int main() {
  int h, w;
  cin >> h >> w;

  vector<vector<char>> vc(h, vector<char>(w));
  vector<vector<int>> vc2(h, vector<int>(w, 0));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> vc[i][j];
    }
  }

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      int num = 0;
      // cout << "pos: " << i << " " << j << endl;
      if (vc[i][j] == '#') {
        cout << '#';
        continue;
      }

      for (int k = 0; k < 8; k++) {
        int newi = i + dx[k];
        int newj = j + dy[k];

        if (0 <= newi && newi < h && 0 <= newj && newj < w) {
          if (vc[newi][newj] == '#') {
            // cout << k << ": " << newi << " " << newj << endl;
            num++;
          }
        }
      }
      cout << num;
    }
    cout << endl;
  }

  return 0;
}