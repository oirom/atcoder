#include <bits/stdc++.h>
using namespace std;

// vector<int> dp(10000, 0);

int fibo(int n, vector<int> &dp) {    
    
    if (n == 0) return 0;
    else if (n == 1) return 1;
    
    if (dp[n]) return dp[n];
    else dp[n] = fibo(n-1, dp) + fibo(n-2, dp);

    return dp[n];
}

int main() {

    vector<int> dp(10000, 0);

    clock_t start = clock();

    for (int n=0; n<=40; ++n) {
        cout << setw(2) << n << " : " << fibo(n, dp) << "\n";
    }

    clock_t end = clock();
    cout << "duration : " << (double)(end - start) / CLOCKS_PER_SEC << "sec.\n";

    return 0;
}