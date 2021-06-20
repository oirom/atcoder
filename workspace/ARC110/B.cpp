#include <bits/stdc++.h>
using namespace std;

long long TEN = 10000000000;
string OOZ = "110";
int main() {
    
    long long n;
    cin >> n;
    string t;
    cin >> t;

    if (t == "1") cout << 2 * TEN  << endl;
    else if (t == "11") cout << TEN << endl;
    else {
        string s = "";
        if (t.substr(0,1) == "0") t = "11" + t, n += 2;
        else if (t.substr(0,2) == "10") t = "1" + t, n += 1;
        //cout << t << endl;
        int cnt = 0;
        while (s.size() < t.size()) { s += "110"; cnt++; }
        cnt--;
        if (s.substr(0,n) == t) {
            cout << TEN - (n+2)/3 + 1<< endl;
        }
        else cout << 0 << endl;
    }  

    return 0;
}