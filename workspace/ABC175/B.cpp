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
using VPLL = vector<PLL>;
using VPLD = vector<PLD>;

const int INF = numeric_limits<int>::max();
const unsigned long long int ULLINF = numeric_limits<unsigned long long int>::max();

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    LL n; cin >> n;
    VLL v;
    map<string, LL> mp;
    REP(i,n) {
        LL tmp;
        cin >> tmp;
        if (mp[to_string(tmp)]==0) {
            v.push_back(tmp);
            mp[to_string(tmp)] = 1;
        }
        else mp[to_string(tmp)]++;
    }
    
    //sort(v.begin(), v.end());
    if (v.size()<3) { cout << 0 << endl; return 0;}
    
    LL ans = 0;
    LL tmp = 0;
    for (LL i=0; i<(v.size()-2); i++)
    {
        for (LL j=i+1; j<(v.size()-1); j++)
        {
            for (LL k=j+1; k<(v.size()); k++)
            {
                if (((v[i]+v[j]>v[k])&&(v[j]+v[k]>v[i]))&&(v[k]+v[i]>v[j]))
                    ans += mp[to_string(v[i])]*mp[to_string(v[j])]*mp[to_string(v[k])];
            }
        }
    }

    cout << ans << endl;

    return 0;
}
