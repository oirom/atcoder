# ここは？
競技プログラミング（主にAtCoder）のコード管理のためのリポジトリ

# アルゴリズム覚書
勉強したアルゴリズムやプログラミングテクニックについてメモしていきます．

## 素数判定 : is_prime
引数 N が素数か否かを判定し，真偽値を返します．
```cpp
bool is_prime(long long N) {
        if (N == 1) return false;
        for (int i=2; i*i<=N; i++) {
            if (N%i==0) return false;
        }
        return true;
}
```

## 素因数分解 : prime_factorize
引数 N を素因数分解し，ベクトル形式で返します．

例として以下の素因数分解の場合，

```math
180 = 2^2 + 3^2 + 5^1
```
返り値は以下のようになります．
```
[(2,2), (3,2), (5,1)]
```

```cpp
vector<pair<long long, long long>> prime_factorize(long long N) {
    vector<pair<long long, long long>> res;
    for (int a=2; a*a<=N; a++) {
        if (N%a != 0) continue;
        ll ex = 0; // 指数

        while (N%a == 0) {
            ex++;
            N /= a;
        }
        
        res.push_back({a, ex});
    }

    if (N != 1) res.push_back({N, 1});
    return res;    
}
```
