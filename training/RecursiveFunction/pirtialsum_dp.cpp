#include <bits/stdc++.h>
using namespace std;

bool func(int i, int x, const vector<int> &a, vector<vector<int>> &dp) {
    
    // ベースケース
    if (i == 0) {
        if (x == 0) return true;
        else return false;
    }
    if (x < 0) return false;

    if (dp[i][x] != -1) return dp[i][x];

    // a[i]を選ばずに次のステップへ
    if (func(i-1, x, a, dp)) return dp[i][x] = 1;
    
    // a[i]を選んで次のステップへ
    if (func(i-1, x-a[i-1], a, dp)) return dp[i][x] = 1;
    
    // どっちもダメだったら
    return dp[i][x] = 0;
}

int main() {

    // 入力
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    int X; cin >> X;

    // dp_table
    vector<vector<int>> dp(10000, vector<int> (10000, -1));

    clock_t start = clock();

    if (func(n, X, a, dp)) cout << "YES" << "\n";
    else cout << "NO" << "\n";
    
    clock_t end = clock();

    cout << "duration : " << (double)(end - start) / CLOCKS_PER_SEC << "sec.\n";

    return 0;
}