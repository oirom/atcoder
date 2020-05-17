#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n; cin >> n;

    vector<int> p(n), q(n);
    for (int i=0; i<n; i++) cin >> p[i];
    for (int i=0; i<n; i++) cin >> q[i];

    vector<int> s;
    for (int i=0; i<n; i++) s.emplace_back(i+1);

    int a = 0, b = 0, counter = 1;
    
    do {
        //for (int i=0; i<n; i++) cout << s[i] << " ";
        //cout << "\n";
        
        bool check1 = true, check2 = true;

        for (int i=0; i<n; i++) {
            if (p[i]!=s[i]) check1 = false;
            if (q[i]!=s[i]) check2 = false;
        }

        if (check1) a = counter;
        if (check2) b = counter;
        counter += 1;
        
    } while (next_permutation(s.begin(), s.end()));

    cout << abs(a-b) << "\n";

    return 0;
}