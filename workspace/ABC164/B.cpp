#include <bits/stdc++.h>
#define SIZE_OF_ARRAY(array) (sizeof(array)/sizeof(array[0]))
using namespace std;
typedef unsigned long long ll;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s, tmp; cin >> s;
    ll num, c=0;

    //ll ssize = static_cast<ll>(s.size());
    ll ssize = (ll)(s.size());

    for (ll i=0; i<=ssize-4; i++)
    {
        for (ll j=4; j<=ssize-i; j++)
        {
            tmp = s.substr(i,j);
            num = stoll(tmp);
            if ((num/2019>0)&&(num%2019==0)) {
                c += 1;
                cout << i << j << "\n";
            }
        }
    }

    cout << c << "\n";

    return 0;
}