#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    vector<pair<int, string>> vp(m);
    for (int i = 0; i < m; i++) {
        cin >> vp[i].first >> vp[i].second;
    }

    int AC = 0;
    vector<int> WA(n,0);

    vector<bool> check(100010, false);
    
    for (int i = 0; i < m; i++) {
        if (check[vp[i].first] == false && vp[i].second == "AC") {
            AC++;
            check[vp[i].first] = true;
        }
        if (check[vp[i].first] == false && vp[i].second == "WA") {
            WA[vp[i].first]++;
        }
    }

    int WAsum = 0;
    for (int i = 0; i <= n; i++) {
        if (check[i] == true) {
            //cout << i << " " << WA[i] << endl;
            WAsum += WA[i];
        }
    }

    cout << AC << " " << WAsum << endl;

    return 0;
}