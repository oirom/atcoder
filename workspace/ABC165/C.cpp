#include <bits/stdc++.h>
using namespace std;
typedef long int li;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    li n, m, q; cin >> n >> m >> q;
    vector<li> a(q), b(q), c(q), d(q); 
    for (li i=0; i<q; i++) {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }

    li ans = 0;
    li it = pow(10,n-1);
    if (it==0) it = 1;

    for (li i=it; i<(pow(10,n)); i++)
    {
        string s = to_string(i);
        li sum = 0;
        for (li j=0; j<q; j++)
        {
            if ((li)(s[b[j]-1]) - (li)(s[a[j]-1]) == c[j]) sum += d[j];
        }

        ans = max(ans, sum);
    }
    
    cout << ans << "\n";

    return 0;
}
