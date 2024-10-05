# 20241006

## 004 - Cross Sum (★2)
所要時間: 15 分

2 つの for 文を使って二次元配列中のすべての要素をなめる際、行と列のどちらを固定しているのかを意識しながらコーディングする。

<details>
<summary>
回答を表示する。
</summary>

```cpp
#include <bits/stdc++.h>

int main() {
  int H, W;
  cin >> H >> W;
  vector<vector<int>> HW(H, vector<int>(W));
  vector<int> sum_of_row(H, 0), sum_of_column(W, 0);
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cin >> HW[i][j];
      sum_of_row[i] += HW[i][j];
      sum_of_column[j] += HW[i][j];
    }
  }

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cout << sum_of_row[i] + sum_of_column[j] - HW[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
```

</details>
