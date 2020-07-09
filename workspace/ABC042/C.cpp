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

    int n, k; cin >> n >> k;
    vector<char> d(k); REP(i,k) cin >> d[i];
    
    //for (int i=n;i<=10*n;i++)
    for (int i=n;i<=(10*n);i++)
    {
        string str = to_string(i);
        int flag = 0;

        REP(j,str.size()) {
            REP(l,k) {
                if (d[l]==str[j]) {
                    flag = 1;
                }
            }
        }

        if (flag==0) {
            cout << str << endl;
            return 0;
        }

    }    


    return 0;
}
