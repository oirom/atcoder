#include <bits/stdc++.h>
#define rep(i,n) for (int i=0; i<(n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s, t; cin >> s >> t;
    string pattern = "atcoder";

    for (int i=0;i<int(s.length());i++) {
    
        if (s[i]==t[i]) continue;
        
        if (s[i]=='@' && pattern.find(t[i])!=std::string::npos) continue;
        if (t[i]=='@' && pattern.find(s[i])!=std::string::npos) continue;
        
        cout << "You will lose" << endl; 
        return 0;
        
    }

    cout << "You can win" << endl;

    return 0;
}
