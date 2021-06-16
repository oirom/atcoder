#include <bits/stdc++.h>
using namespace std;
typedef long int li;
typedef long long ll;

int main() {

    ll n, all = 0, ans = 0;
    cin >> n;
    set<ll> st;    
    vector<ll> a(n);
    map<ll, ll> mp, com;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        st.insert(a[i]);
        mp[a[i]]++;
    }

    for (auto x : st) {
        com[x] = mp[x] * (mp[x]-1) / 2;
        all += com[x];
    }
    
    for (auto x : a) { 
        ll tmp = all - com[x] + (mp[x]-1) * (mp[x]-2) / 2;
        cout << tmp << endl;
    } 


    return 0;
}