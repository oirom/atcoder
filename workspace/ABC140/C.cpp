#include <bits/stdc++.h>

#define rep(i,n,s) for(int i=s; i<n; i++)

using namespace std;

int main(){

    int N; cin >> N;
    int B[N-1]; rep(i,N-1,0) cin >> B[i];

    int sum = 0;
    sum = B[0] + B[N-2];

    rep(i,N-2,0) {
        
        sum += min(B[i],B[i+1]);

    }

    cout << sum << endl;

    return 0;
}