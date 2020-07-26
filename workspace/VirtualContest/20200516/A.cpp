#include <bits/stdc++.h>

using namespace std;
typedef long int li;
typedef long long ll;

int main() {
    
    string s; cin >> s;
    int a = 0, b = 0, c = 0;

    for (int i=0; i<s.size(); i++) {
        if (s[i]=='a') a += 1;
        else if (s[i]=='b') b += 1;
        else if (s[i]=='c') c += 1;
    }

    if (abs(a-b)<=1&&abs(b-c)<=1&&abs(c-a)<=1) {
        cout << "YES" << "\n";
        return 0;
    }

    cout << "NO" << "\n";

    return 0;
}