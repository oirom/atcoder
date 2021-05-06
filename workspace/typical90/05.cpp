#include <bits/stdc++.h>
using namespace std;

// 難しいので桁DPを使う別問題で勉強
// https://luzhiled.hatenablog.com/entry/2017/12/03/124453
// https://algo-logic.info/digit-dp/
// https://atcoder.jp/contests/abc117/tasks/abc117_d

// N以下の整数のうち、各桁の和がDになる整数はいくつあるか？

string N;
int D;
int mod = 0;
int dp[10000][2][1001];

// k    : 今見ている桁は先頭から何桁目？
// tight: 今見ている桁は自由？
// sum  : 今まで見てきた桁の数値の和
int rec(int k = 0, bool tight = true, int sum = 0) {
    
    if (sum > D) return 0;
    if (k == N.size()) return sum == D;

    int x = N[k] - '0';
    int r = (tight ? x : 9);
    
    int &res = dp[k][tight][sum];
    if  (~res) return res;
    res = 0;

    for (int i = 0; i <= r; i++) {
        res += rec(k + 1, tight && i == r, sum + i);
        //res %= mod;
    }

    return res;
}

int main() {

    cin >> N;
    cin >> D;

    memset(dp, -1, sizeof(dp));
    cout << rec() << endl;

    return 0;
}