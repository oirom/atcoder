#include <bits/stdc++.h>
using namespace std;
typedef long int li;
typedef unsigned long long ll;

int main() {

    long long n, k;
    cin >> n >> k;
    vector<long long> a(n+1);
    for (int i = 1; i <= n; i++) cin >> a[i];

    long long i = 1, cnt = 0;
    
    vector<long long> c(200200, -1);
    while ( c[i] == -1) {
        c[i] = cnt;
        cnt++;
        i = a[i];
    }


    if (k <= cnt) {
        long long i = 1;
        for (int j = 0; j < k; j++) {
            i = a[i];
        }
        cout << i << endl;
        return 0;
    }
    /*cout << k << endl;
    cout << cnt << endl;
    cout << i << endl;
    cout << c[i] << endl;*/
    k = (k - c[i]) % (cnt - c[i]);
    //cout << k << endl;

    for (int j = 0; j < k; j++) i = a[i];

    cout << i << endl;

    return 0;
}