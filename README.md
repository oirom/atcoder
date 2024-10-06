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

using namespace std;

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

using namespace std;

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

## [022 - Cubic Cake（★2）](https://atcoder.jp/contests/typical90/tasks/typical90_v)
所要時間: 15 分  
要復習度: ★★☆☆☆

問題をちゃんと読む。

<details>
<summary>
回答を表示する。
</summary>

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
  long long A, B, C;
  cin >> A >> B >> C;

  long long gcd;
  gcd = greatest_common_divisor(A, B);
  gcd = greatest_common_divisor(gcd, C);

  long long ans = A / gcd + B / gcd + C / gcd - 3;
  cout << ans << endl;

  return 0;
}
```

</details>

## [024 - Select +／- One（★2）](https://atcoder.jp/contests/typical90/tasks/typical90_x)
所要時間: 30 分  
要復習度: ★★★☆☆

割り算の余りを求める際は、割られる数が負の値を取り得るかどうかに注意する。

<details>
<summary>
回答を表示する。
</summary>

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> A(N), B(N);
  for (int i = 0; i < N; i++) { cin >> A[i]; }
  for (int i = 0; i < N; i++) { cin >> B[i]; }

  vector<long long> diff(N);
  for (int i = 0; i < N; i++) { diff[i] = abs(A[i] - B[i]); }

  long long sum_of_diff = accumulate(diff.begin(), diff.end(), 0);
  if (K < sum_of_diff || (K - sum_of_diff) % 2) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }

  return 0;
}
```

</details>

## [027 - Sign Up Requests （★2）](https://atcoder.jp/contests/typical90/tasks/typical90_aa)
所要時間: 10 分  
要復習度: ★☆☆☆☆

set の contains は C++20 以降でなければ使えない。

<details>
<summary>
回答を表示する。
</summary>

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
  int N;
  cin >> N;

  set<string> usernames;
  for (int i = 1; i <= N; ++i) {
    string s;
    cin >> s;
    if (usernames.count(s) == 0) {
      cout << i << endl;
      usernames.insert(s);
    }
  }

  return 0;
}
```

</details>

## [033 - Not Too Bright（★2）](https://atcoder.jp/contests/typical90/tasks/typical90_ag)
所要時間: -- 分  
要復習度: ★★★☆☆

コーナーケースに気付けず解説 AC。問題文をよく読みましょう。

<details>
<summary>
回答を表示する。
</summary>

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
  int H, W;
  cin >> H >> W;

  int h = (H % 2 == 0) ? H / 2: H / 2 + 1;
  int w = (W % 2 == 0) ? W / 2: W / 2 + 1;

  if (H == 1 || W == 1) {
    cout << H * W << endl;
  } else {
    cout << h * w << endl;
  }

  return 0;
}
```

</details>

## [055 - Select 5（★2）](https://atcoder.jp/contests/typical90/tasks/typical90_bc)
所要時間: 20 分  
要復習度: ★★☆☆☆

解けはしたが、nCk の実装は自力ではなくネットからのコピペなのでそこを復習する必要あり。

<details>
<summary>
回答を表示する。
</summary>

```cpp
#include <bits/stdc++.h>

using namespace std;

void recursive_comb(int *indexes, int s, int rest, std::function<void(int *)> f) {
  if (rest == 0) {
    f(indexes);
  } else {
    if (s < 0) return;
    recursive_comb(indexes, s - 1, rest, f);
    indexes[rest - 1] = s;
    recursive_comb(indexes, s - 1, rest - 1, f);
  }
}

void foreach_comb(int n, int k, std::function<void(int *)> f) {
  int indexes[k];
  recursive_comb(indexes, n - 1, k, f);
}

int main() {
  long long N, P, Q;
  cin >> N >> P >> Q;
  vector<long long> A(N);
  for (int i = 0; i < N; i++) { cin >> A[i]; }

  long long ans = 0;
  foreach_comb(N, 5, [&](int *indexes) {
    long long remainder = 1; 
    for (int i = 0; i < 5; i++) {
      remainder *= A[indexes[i]];
      remainder %= P;
    }
    if (remainder == Q) { ans++; }
  });

  cout << ans << endl;

  return 0;
}
```

</details>

## [061 - Deck（★2）](https://atcoder.jp/contests/typical90/tasks/typical90_bi)
所要時間: 15 分  
要復習度: ★★☆☆☆

リストのイテレータを進めて要素を探しているのが非効率でベストではないはずなので復習する。

<details>
<summary>
回答を表示する。
</summary>

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
  int Q;
  cin >> Q;

  list<int> l;
  vector<int> ans;
  for (int i = 0; i < Q; i++) {
    int t, x;
    cin >> t >> x;
    if (t == 1) { l.push_front(x); }
    if (t == 2) { l.push_back(x); }
    if (t == 3) {
      auto it = l.begin();
      advance(it, x - 1);
      ans.push_back(*it);
    }
  }

  for (auto a : ans) cout << a << endl;

  return 0;
}
```

</details>

## [067 - Base 8 to 9（★2）](https://atcoder.jp/contests/typical90/tasks/typical90_bo)
所要時間: -- 分  
要復習度: ★★★★☆

解説 AC。

<details>
<summary>
回答を表示する。
</summary>

```cpp
#include <bits/stdc++.h>

using namespace std;

long long base8to10(string n) {
  long long res = 0;
  long long base = 1;
  for (int i = n.size() - 1; i >= 0; --i) {
    res += (n[i] - '0') * base;
    base *= 8;
  }
  return res;
}

string base10to9(long long n) {
  string res = "";
  while (n > 0) {
    res += to_string((n % 9));
    n /= 9;
  }
  reverse(res.begin(), res.end());

  long long i = 0;
  while (res[i] == '0') { i++; }
  res.erase(0, i);

  if (res == "") res = "0";
  return res;
}

string eight_to_five(string n) {
  for (int i = 0; i < (int)n.size(); ++i) {
    if (n[i] == '8') n[i] = '5';
  }
  return n;
}

int main() {
  string N;
  int K;
  cin >> N >> K;

  string ans_str = N;
  long long ans_num;
  for (int i = 0; i < K; ++i) {
    ans_num = base8to10(ans_str);
    ans_str = base10to9(ans_num);
    ans_str = eight_to_five(ans_str);
  }

  cout << ans_str << endl;

  return 0;
}

```

</details>


## [078 - Easy Graph Problem（★2）](https://atcoder.jp/contests/typical90/tasks/typical90_bz)
所要時間: 15 分  
要復習度: ★☆☆☆☆

グラフの問題感の薄い回答になっているので、よりグラフらしく解く方法を復習する。

<details>
<summary>
回答を表示する。
</summary>

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> tmp(N, 0);
  for (int i = 0; i < M; i++) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    if (a > b) tmp[a]++;
    if (b > a) tmp[b]++;
  }

  int ans = 0;
  for (int i = 0; i < N; i++) {
    if (tmp[i] == 1) ans++;
  }

  cout << ans << endl;

  return 0;
}
```

</details>


## [000 - Template（★0）]()
所要時間: XX 分  
要復習度: ☆☆☆☆☆

Hello, world.

<details>
<summary>
回答を表示する。
</summary>

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
  printf("Hello, world.\n")
  return 0;
}
```

</details>
