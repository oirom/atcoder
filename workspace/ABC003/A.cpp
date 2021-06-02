#include <bits/stdc++.h>
using namespace std;

int main() {

    string S;
    cin >> S;

    /*string newS = "";
    newS += S[0];
    for (int i = 0; i < (int)S.size() - 1; i++) {
        if (S[i] == S[i + 1]) continue;
        else newS += S[i + 1];
    }*/

    //cout << newS << endl;

    set<char> st;
    for (int i = 0; i < (int)S.size(); i++) {
        st.insert(S[i]);
    }

    if (st.size() == 4) cout << "Yes" << endl;
    else if (st.size() == 2) {
        if (st.find('E') != st.end() && st.find('W') != st.end()) cout << "Yes" << endl;
        else if (st.find('N') != st.end() && st.find('S') != st.end()) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    
    else cout << "No" << endl;

    return 0;
}