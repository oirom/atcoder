#include <bits/stdc++.h>
using namespace std;
using pint = pair<int, int>;

int main() {
    
    int n; cin >> n;
    vector<pint> v; v.resize(n);
    for (int i=0; i<n; i++) cin >> v[i].first >> v[i].second;

    vector<int> s; for (int i=0; i<n; i++) s.emplace_back(i);

    double ans = 0;
    int counter = 0;
    do {
        for (int i=0; i<n-1; i++) {
            ans += sqrt(pow(v[s[i]].first - v[s[i+1]].first, 2) + pow(v[s[i]].second - v[s[i+1]].second, 2));
        }
        counter += 1;
    } while (next_permutation(s.begin(), s.end()));

    cout << setprecision(10) << (double)ans/(double)counter << "\n";
    
    return 0;
}