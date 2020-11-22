#include <bits/stdc++.h>
typedef long int li;
typedef long long ll;
using namespace std;
using Graph = vector<vector<ll>>;

const int INF = 1000000000;
vector<int> to[100005];

int main() {

    long long n, x;
    cin >> n >> x;
    string s;
    cin >> s;

    long long ans = x;
    for (int i=0; i<(int)s.size(); i++)
    {
        if (s[i]=='o') ans++;
        else if (s[i]=='x'&&ans>0) ans--;
    }

    cout << ans << endl;

    return 0;
}