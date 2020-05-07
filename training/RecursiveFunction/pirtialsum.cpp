#include <bits/stdc++.h>
using namespace std;

bool func(int i, int x, const vector<int> &a) {
    
    // ベースケース
    if (i == 0) {
        if (x == 0) return true;
        else return false;
    }

    // a[i]を選ばずに次のステップへ
    if (func(i-1, x, a)) return true;
    
    // a[i]を選んで次のステップへ
    if (func(i-1, x-a[i-1], a)) return true;
    
    // どっちもダメだったら
    return false;
}

int main() {

    // 入力
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    int X; cin >> X;

    clock_t start = clock();

    if (func(n, X, a)) cout << "YES" << "\n";
    else cout << "NO" << "\n";
    
    clock_t end = clock();

    cout << "duration : " << (double)(end - start) / CLOCKS_PER_SEC << "sec.\n";

    return 0;
}