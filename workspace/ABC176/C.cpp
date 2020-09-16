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

int main(){

	LL h, w;
	cin >> h >> w;
	LL ch, cw, dh, dw;
	cin >> ch >> cw >> dh >> dw;
	vector<vector<char>> s(h, vector<char>(w));

	for (LL i=0; i<h; i++) {
		for (LL j=0; j<w; j++) {
			cin >> s.at(i).at(j);
		}
	}

	

	return 0;
}
