#include <bits/stdc++.h>

#define rep(i,n,s) for(int i=0+s; i<n; i++)

using namespace std;

int main() {

    long int N, counter=0;
    cin >> N;
    
    string S;
    cin >> S;

    rep(i,N,0) {
        rep(j,N,i+1) {
            rep(k,N,j+1) {
                /*if (((S[i]!=S[j])&&(S[i]!=S[k]))&&(S[j]!=S[k])) {
                    if ((j-i)!=(k-j)) {
                        counter += 1;
                    }
                }*/
                cout << i << j << k << endl;
            }
        }
    }

    cout << counter << endl;

    return 0;
}