#include <bits/stdc++.h>

#define rep(i,n) for(int i=1; i<=n; i++)

using namespace std;

int main() {

    int N, M;
    cin >> N >> M;

    cout << (N*(N-1))/2 + (M*(M-1))/2 << endl;

    return 0;
}