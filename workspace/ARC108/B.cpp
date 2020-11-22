#include <bits/stdc++.h>
typedef long int li;
typedef long long ll;
using namespace std;
using Graph = vector<vector<ll>>;

const int INF = 1000000000;
vector<int> to[100005];

int main() {
    
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> location_f;
    for (int i=0; i<(int)s.size(); i++) {
        if (s[i]=='f') location_f.push_back(i);
    }
    sort(location_f.rbegin(), location_f.rend());
    
    for (int i=0; i<(int)location_f.size(); i++) {
        if (s.substr(location_f[i], 3)=="fox") {
            s.erase(location_f[i], 3);
        }
        // cout << (int)s.size() << ":" << s << endl;
    }

    cout << (int)s.size() << endl;

    return 0;
}