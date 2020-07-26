#include <bits/stdc++.h>
using namespace std;
typedef long int li;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int k, a, b; cin >> k >> a >> b;

    for (int i=a; i<=b; i++)
    {
        if ((i%k)==0&&(i/k)>0) {
            cout << "OK" << "\n";
            return 0;
        }
    }

    cout << "NG" << "\n";

    return 0;
}