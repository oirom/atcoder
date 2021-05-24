# 復習したい問題リスト
## [ABC172-C](https://atcoder.jp/contests/abc172/tasks/abc172_c)
- 初見で累積和の発想が出なかった
- iとjのうち，片方を固定してもう片方を変化させながら最適解を求めるのは典型？
- 終了条件もしっかり考えれるようになりたい

## [ABC191-C](https://atcoder.jp/contests/abc191/tasks/abc191_c)
H行W列のマスのうち、黒く塗られている部分（#）の部分は何角形になっているか。マスの端の列もしくは行は白（.）で塗りつぶされている。

2行2列の部分マスを全て見ていく。この時、部分マスのうち1つだけが黒の場合と3つが黒の場合は、共に角を一つ持っているという意味で同じ。
```cpp
int main() {

    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i,h) cin >> s[i];

    int ans = 0;
    rep(i, h-1) rep(j, w-1) {
        int cnt = 0;
        rep(di,2) rep(dj,2) {
            if (s[i+di][j+dj] == '#') cnt++;
        }
        if (cnt == 1 || cnt == 3) ans++;
    }

    cout << ans << endl;

    return 0;
}
```
