#include <bits/stdc++.h>
using namespace std;

int main() {

    int H, W;
    cin >> H >> W;
    vector<vector<int>> A(H, vector<int>(W));
    vector<int> SV(W,0), SH(H,0);

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> A[i][j];
            SV[j] += A[i][j];
            SH[i] += A[i][j];
        }
    }

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cout << SV[j] + SH[i] - A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}