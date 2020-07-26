#include <bits/stdc++.h>

using namespace std;

int main() {

    string str, str2, str3, rev, rev2, rev3;
    cin >> str; 

    long int N = (long int)(str.length()), f=0;
    reverse_copy(str.begin(), str.end(), back_inserter(rev));
    if (str==rev) f += 1;

    str2 = str.substr(0, (N-1)/2);
    cout << str2 << endl;

    reverse_copy(str2.begin(), str2.end(), back_inserter(rev2));
    if (str2==rev2) f += 1;

    str3 = str.substr((N+3)/2-1, N);
    cout << str3 << endl;

    reverse_copy(str3.begin(), str3.end(), back_inserter(rev3));
    if (str3==rev3) f += 1;

    if (f==3) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    return 0;
}