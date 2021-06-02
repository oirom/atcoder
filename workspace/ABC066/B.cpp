#include <bits/stdc++.h>
using namespace std;

int main() {

    string S;
    cin >> S;

    for (int i = 1; i < (int)S.size(); i++) {
        int length = ((int)S.size() - i) / 2;
        if (S.substr(0, length) == S.substr(length, length)) {
            cout << 2 * length << endl;
            return 0;
        }
    }
}