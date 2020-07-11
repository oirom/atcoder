#include <bits/stdc++.h>
#define REP(i,n) for (int i=0; i<(n); ++i)
#define REPR(i,n,m) for (int i=(n); i>=(m); --i)
using namespace std;
using LL = long long;
using LD = long double;
using PLL = pair<long long, long long>;
using PLD = pair<long double, long double>;
using VLL = vector<long long>;
using VLD = vector<long double>;
using VPLD = vector<PLD>;

const int INF = numeric_limits<int>::max();

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    vector<int> h;
    int last = 0;
    int tmp = 0;
    REP(i,n)
    {
        cin >> tmp;
        if (tmp!=last) {
            h.push_back(tmp);
            last = tmp;
        }
    }

    if (n==1) { cout << tmp << endl; return 0; }
    if (n==2) { cout << max(last, tmp) << endl; return 0; }

    vector<int> points;
    points.push_back(0);
    points.push_back(h.size()-1);
    for (int i=1; i<h.size()-1; i++)
    {
        if (h[i-1]<h[i]&&h[i]>h[i+1]) points.push_back(i);
        if (h[i-1]>h[i]&&h[i]<h[i+1]) points.push_back(i);
    }
    sort(points.begin(), points.end());

    REP(i, points.size()) cout << points[i] << endl;

    return 0;
}