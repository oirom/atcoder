#include <bits/stdc++.h>
using namespace std;
typedef long int li;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    li n, m; cin >> n >> m;
    vector<li> h(n+1,0); for (li i=1; i<=n; i++) cin >> h[i];
    vector<li> l(n+1,0); 
    //vector<vector<li>> table(n+1, vector<li>(n+1, 0));
    vector<li> table(n+1, 0);
    
    li c, d;
    for (li i=0; i<m; i++) 
    {
        cin >> c >> d;
        
        l[c] += 1;
        l[d] += 1;

        if (h[c] > h[d])
        {
            table[c] += 1;
        }
        else if (h[c] < h[d])
        {
            table[d] += 1;
        }        
    }

    li ans = 0;
    for (li i=1; i<n+1; i++)
    {
        if (table[i] == l[i]) ans += 1;
    }

    cout << ans << "\n";
    
    return 0;
}