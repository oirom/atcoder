#include <bits/stdc++.h>
using namespace std;

int fibo(int n) {
    
    // ベースケース
    if (n == 0) return 0;
    else if (n == 1) return 1;

    // 再帰呼び出し
    return fibo(n-1) + fibo(n-2);
}

int main() {

    clock_t start = clock();

    for (int n=0; n<=40; ++n) {
        cout << setw(2) << n << " : " << fibo(n) << "\n";
    }
    
    clock_t end = clock();
    cout << "duration : " << (double)(end - start) / CLOCKS_PER_SEC << "sec.\n";

    return 0;
}