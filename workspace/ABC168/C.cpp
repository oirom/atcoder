#include <bits/stdc++.h>
using namespace std;
typedef long int li;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long double a, b, h, m; cin >> a >> b >> h >> m;

    long double theta = abs((h*30.0+m*0.5)- m*6.0) * M_PI / 180;
    cout << theta << "\n";

    long double ans = pow(a,2.0) + pow(b,2.0) - 2*a*b*cos(theta);

    cout << setprecision(20)<< sqrt(ans) << "\n";

    

    return 0;
}