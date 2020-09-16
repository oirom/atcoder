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

    LL dx[4] = {0, 1, 0, -1};
    LL dy[4] = {1, 0, -1, 0};

	LL h, w, ch, cw, dh, dw;
	cin >> h >> w >> ch >> cw >> dh >> dw;
    ch--; cw--; dh--; dw--;
	vector<string> s(h);
    REP(i,h) cin >> s[i];

	queue<PLL> que, que2;
    que.push(PLL(ch, cw));

    vector<VLL> cost(h, VLL(w, INF));
    cost[ch][cw] = 0;

    while(!que.empty()||!que2.empty()) {

        if (!que.empty()) {
            auto cur = que.front();
            que2.push(PLL(cur.first, cur.second)); // ここでque2にプッシュする
            que.pop();
            REP(i,4) {
                LL ny = cur.first + dx[i];
                LL nx = cur.second + dy[i];
                if (ny<0 || ny>=h || nx<0 || nx>=w || s[ny][nx]=='#') continue;
                if (cost[cur.first][cur.second] < cost[ny][nx] && s[ny][nx]=='.') {
                    cost[ny][nx] = cost[cur.first][cur.second];
                    que.push(PLL(ny, nx));
                    //que2.push(PLL(ny,nx));　ここでque2にプッシュしたらダメ
                }
            }
        }

        else {
            auto cur = que2.front();
            que2.pop();
            for (int i=-2; i<=2; i++) {
                for (int j=-2; j<=2; j++) {
                    LL ny = cur.first + i;
                    LL nx = cur.second + j;
                    if (ny<0 || ny>=h || nx<0 || nx>=w || s[ny][nx]=='#') continue;
                    if (cost[cur.first][cur.second] + 1 < cost[ny][nx] && s[ny][nx]=='.') {
                        cost[ny][nx] = cost[cur.first][cur.second] + 1;
                        que.push(PLL(ny,nx));
                        //que2.push(PLL(ny, nx));
                    }
                }
            }
        }
    }

    if (cost[dh][dw]==INF) cout << -1 << endl;
    else cout << cost[dh][dw] << endl;

	return 0;
}
