#include <bits/stdc++.h>
using namespace std;

vector<vector<long long>> vv(100);

int main() {

    long long N;
    cin >> N;
    vector<long long> A(N);
    for (int i=0; i<N;i++) {
        cin >> A[i];
        long long tmp = A[i] % 100;
        vv[tmp].push_back(A[i] - tmp);
    }

    long long ans = 0;

    for (int i=0; i<100; i++) {
        if (vv[i].size() >= 2) {
            vector<long long> evenness(2,0);
            int tmp = (vv[i][0] / 100) % 2;
            evenness[tmp]++;
            for (int j=1; j<(int)vv[i].size(); j++) {
                int tmp = (vv[i][j] / 100) % 2;
                ans += evenness[tmp];
                evenness[tmp]++;
            }
            /*
            for (int j=0; j<vv[i].size()-1; j++) {

                for (int k=j+1; k<vv[i].size(); k++) {
                    if ((vv[i][j] - vv[i][k]) % 200 == 0) ans++;
                }
            }*/
        }
    }

    cout << ans << endl;

    return 0;
}