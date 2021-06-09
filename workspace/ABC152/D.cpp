#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

signed main() {

    int n; 
    cin >> n;
    vector<vector<int>> c(10, vector<int>(10,0));

    for (int i = 1; i <= n; i++) {
        string str;
        str = to_string(i);
        int f = str[0] - '0';
        int s = str[(int)(str.size()-1)] - '0';
        c[f][s]++;
    }

    int cntij = 0;
    int cntji = 0;

    string str = to_string(n);
    int f = str[0] - '0';
    int s = str[(int)(str.size() - 1)] - '0';

    int ans = 0;

    for (int i = 1; i <= 9; i++) {
        //cout << "start with " << i << ":" << endl;
        for (int j = 1; j <= 9; j++) {
            //if (c[i][j] != 0) cout << "end with " << j << ":" << c[i][j] << endl;
            ans += (c[i][j] * c[j][i]);
        }
    }

    /*cout << f << " " << s << endl;
    cout << c[f][s] << endl;
    cout << c[s][f] << endl;*/

    cout << ans << endl;


    return 0;
}