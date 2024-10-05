# 競プロ典型 90 問 
## [004 - Cross Sum（★2）](https://atcoder.jp/contests/typical90/tasks/typical90_d)
所要時間: 15 分  
要復習度: ★☆☆☆☆

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

## [010 - Score Sum Queries（★2）](https://atcoder.jp/contests/typical90/tasks/typical90_j)
所要時間: 15 分  
要復習度: ★★☆☆☆

配列の先頭から順に累積和を格納したのちに、指定した範囲内での合計値を算出する。簡単な例で図を書くと何をするべきかがわかりやすい。

<details>
<summary>
回答を表示する。
</summary>

```cpp
#include <bits/stdc++.h>


int main() {
  long long N;
  cin >> N;
  vector<long long> class_1_point(N+1, 0), class_2_point(N+1, 0);
  for (int i = 0; i < N; ++i) {
    int C, P;
    cin >> C >> P;

    if (C == 1) {
      class_1_point[i+1] = class_1_point[i] + P;
      class_2_point[i+1] = class_2_point[i];
    } else {
      class_2_point[i+1] = class_2_point[i] + P;
      class_1_point[i+1] = class_1_point[i];
    }
  }

  int Q;
  cin >> Q;
  for (int i = 0; i < Q; ++i) {
    int L, R;
    cin >> L >> R;
    cout << (class_1_point[R] - class_1_point[L-1]) << " ";
    cout << (class_2_point[R] - class_2_point[L-1]) << endl;
  }

  return 0;
}
```

</details>
