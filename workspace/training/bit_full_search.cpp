#include <bits/stdc++.h>

using namespace std;

int main(){

    /* int n = 3;

    for (int bit=0; bit<(1<<n); bit++) {
        vector<int> s;

        for (int i=0; i<n; i++) {
            if (bit & (1<<i)) {
                s.push_back(i);
            }
        }

        cout << bit << ": {";

        for (int i=0; i<(int)s.size(); i++) {
            cout << s[i] << " ";
        }

        cout << "}" << endl;
    }*/

    /*int a = 0b101101;
    int b = 0b011001;

    cout << bitset<8>(a) << " and " << bitset<8>(b) << " = " << bitset<8>(a&b) << endl;*/

    /* int n = 5;

    for (int bit=0; bit<(1<<n); bit++) {
        
        vector<int> s;
        for (int i=0; i<n; i++) {
            if (bit&(1<<i)) s.push_back(i);
        }

        cout << bit << ": {";
        for (int i=0; i<(int)s.size(); i++) {
            cout << s[i] << " ";
        }
        cout << "}" << "\n";

    } */

    int n;
    int a[25];
    int k;

    cin >> n; for (int i=0; i<n; i++) cin >> a[i];
    cin >> k;

    bool exist = false;

    for (int bit=0; bit<(1<<n); bit++)
    {
        int sum = 0;
        cout << bitset<5>(bit) << endl;
        for (int i=0; i<n; i++)
        {
            if (bit&(1<<i))
            {
                sum += a[i];
            }
        }

        if (sum==k) exist = true;
    }

    if (exist) cout << "yes" << endl;
    else cout << "no" << endl;

    return 0;
}