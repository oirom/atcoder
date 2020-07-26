#include <bits/stdc++.h>
using namespace std;
typedef long int li;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;

    int t = (n%100)%10;

    if (t==0||t==1||t==6||t==8) cout << "pon";
    else if (t==3) cout << "bon";
    else cout << "hon";

    cout << "\n";
    

    return 0;
}