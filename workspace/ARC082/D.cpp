#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    vector<int> p(n+10);
    for (int i = 1; i <= n; i++) cin >> p[i];

    int id = 1;
    int ct = 0;
    while (id <= n) {
        if (p[id] == id) {
            ct += 1;
            id += 2;
        } else {
            id += 1;
        }
    }

    cout << ct << endl;

    return 0;
}