#include <bits/stdc++.h>
typedef long int li;
typedef long long ll;
using namespace std;
using Graph = vector<vector<ll>>;

const int INF = 1000000000;
vector<int> to[100005];

int main() {
    
    long double s, p;
    cin >> s >> p;

    long double m1, m2;
    m1 = (s+sqrt(s*s-4*p))/2;
    m2 = (s-sqrt(s*s-4*p))/2;

    if (m1>0&&s-m1>0&&m1*(s-m1)==p) {
        cout << "Yes" << endl;
    } else if (m2>0&&s-m2>0&&m2*(s-m2)==p) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}