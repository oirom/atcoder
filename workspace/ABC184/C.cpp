#include <bits/stdc++.h>
typedef long int li;
typedef long long ll;
using namespace std;
using Graph = vector<vector<ll>>;

const int INF = 1000000000;
vector<int> to[100005];

bool movable(ll x, ll y) {

    if (0==x+y||0==x-y||x+y<=3) return true;
    else return false;

}

int main() {

    long long r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;

    if (r1==r2&&c1==c2) {
        cout << 0 << endl;
        return 0;
    }

    if ((r1+c1==r2+c2)||(r1-c1==r2-c2)||(abs(r1-r2)+abs(c1-c2)<=3)) {
        cout << 1 << endl;
        return 0;
    }

    if ((r1+c1+r2+c2)%2==0) {
        cout << 2 << endl;
        return 0;
    }

    if ((abs(r1-r2)+abs(c1-c2)<=6)) {
        cout << 2 << endl;
        return 0;
    }

    if (abs((r1+c1)-(r2+c2))<=3||abs((r1-c1)-(r2-c2))<=3) {
        cout << 2 << endl;
        return 0;
    } 
    
    cout << 3 << endl;

    return 0;
}