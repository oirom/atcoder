#include <bits/stdc++.h>
#define REP(i,n) for (int i=0; i<(n); ++i)
#define REPR(i,n,m) for (int i=(n); i>=(m); --i)
using namespace std;
using LL = long long;
using LD = long double;
using PLL = pair<long long, long long>;
using PLD = pair<long double, long double>;
using VLL = vector<long long>;
using VLD = vector<long double>;
using VPLL = vector<PLL>;
using VPLD = vector<PLD>;

int main() {

    long long N, X, M;
    cin >> N >> X >> M;

    vector<int> ord(M, -1);
    vector<long long> rireki, syu;
    long long res = 0;

    for (int n=0; n<N; n++) {
        if (ord[X] != -1) {
            int p = ord[X];
            for (long long i = p; i < n; i++) syu.push_back(rireki[i]);
            break;
        }
        ord[X] = n;
        rireki.push_back(X);
        res += X;
        X = (X * X) % M;
    }
    N = N - rireki.size();

    if (N == 0) {
        cout << res << endl;
        return 0;
    }

    vector<long long> sum(syu.size() + 1, 0);
    for (int i=0; i<syu.size(); i++) sum[i+1] = sum[i] + syu[i];

    long long q = N / syu.size();
    long long r = N % syu.size();
    res += sum[syu.size()] * q + sum[r];
    cout << res << endl;

    return 0;
}
