#include <bits/stdc++.h>
using namespace std;

int main() {

    long long N, A, B, C, D;
    cin >> N >> A >> B >> C >> D;
    // A--, B--, C--, D--;
    string S;
    cin >> S;
    S = "#" + S + "#";

    auto can_reach = [&](int start, int end) {
        for (int i = start; i + 1 <= end; i++) {
            if (S[i] == '#' && S[i + 1] == '#') return false;
        }
        return true;
    };

    if (!can_reach(A, C)||!can_reach(B, D)) {
        cout << "No" << endl;
        return 0;
    }

    if (C > D) {
        for (int i = B; i <= D; i++) {
            if (S[i-1] == '.' && S[i] == '.' && S[i+1] == '.') {
                cout << "Yes" << endl;
                return 0;
            }
        }

        cout << "No" << endl;
        return 0;
    }

    cout << "Yes" << endl;
    return 0;
}