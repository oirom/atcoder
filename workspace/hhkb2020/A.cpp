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

int main() {
  
    int n;
    cin >> n;
    map<int, bool> m;

    int current = 0;

    REP(i,n) {
        
        int tmp;
        cin >> tmp;
        m[tmp] = true;

        while (m[current]) current++;
        cout << current << endl;
    } 
     
    return 0;
}