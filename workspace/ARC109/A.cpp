#include <bits/stdc++.h>
typedef long int li;
typedef long long ll;
using namespace std;

int main() {

    int a, b, x, y;
    cin >> a >> b >> x >> y;

    int d1=100000000;
    if (a>b) {
        if (a-b==1) d1 = x;
        else d1 = min((abs(a-b)*2-1)*x, x + abs(a-b-1)*y);

        cout << d1 << endl;
        return 0;
    }

    int d2=100000000;
    if (a==b) {
        d2 = x;
        cout << d2 << endl;
        return 0;
    }

    int d3=100000000;
    if (b>a) {
        d3 = min((abs(b-a)*2+1)*x, x + abs(b-a)*y);
        cout << d3 << endl;
        return 0;
    }
    
    return 0;
}