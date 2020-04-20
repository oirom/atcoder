#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, bb; cin >> N;
    int INDEX[N], t; for(int i=0; i<N; i++) INDEX[i] = i;
    string S[N], a, b, tmp;
    for(int i=0; i<N; i++) {
        cin >> a >> bb;
        bb = 100 - bb;
        b = to_string(bb);
        while(b.length() < 3) b = "0" + b;
        S[i] = a + b;
    }

    for(int i=1; i<N; i++) {
        for(int j=1; j<N; j++) {
            if (S[j-1].compare(S[j])>0) {
                tmp = S[j-1];   t = INDEX[j-1];
                S[j-1] = S[j];  INDEX[j-1] = INDEX[j];
                S[j] = tmp;     INDEX[j] = t;
            }
        }
    }

    for(int i=0; i<N; i++) cout << INDEX[i]+1 << "\n";
    
    return 0;
}