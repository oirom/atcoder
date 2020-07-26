#include <bits/stdc++.h>
using namespace std;
typedef long int li;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    li x; cin >> x;

    for (li i=1000; i>=(-1000); i--) {
        for (li j=1000; j>=(-1000); j--) {
            if (x == (pow(i,5) - pow(j,5))){
                cout << i << " " << j << "\n";
                return 0;
            }
        }
    }
}