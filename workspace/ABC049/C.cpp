#include <bits/stdc++.h>
#define ll long long

using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    string str; cin >> str; reverse(str.begin(), str.end());
    
    string ptr[4] = {"dream", "dreamer", "erase", "eraser"};

    for (int i=0; i<4; i++) reverse(ptr[i].begin(), ptr[i].end());

    bool can = true;
    for (ll i=0; i<str.length();)
    {
        bool can2 = false;
        for (int j=0; j<4; j++)
        {
            string p = ptr[j];
            if (str.substr(i, p.length()) == p)
            {
                can2 = true;
                i += p.length();
            }

        }

        if (can2==false) 
        {
            cout << "NO" << "\n";
            return 0;
        }
    }
    
    cout << "YES" << "\n";
    
    return 0;
}