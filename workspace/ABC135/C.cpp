#include <bits/stdc++.h>

#define rep(i,n,s) for(int i=s; i<n; i++)

using namespace std;

int main(){

    long int N; cin >> N;
    long int A[N+1],B[N]; 
    rep(i,N+1,0) cin >> A[i];
    rep(i,N,0) cin >> B[i];

    long int sum = 0;
    rep(i,N,0) {
        
        if (A[i]<B[i]) {
            sum += A[i];
            if (A[i+1]<abs(B[i]-A[i])) {
                sum += A[i+1];
                A[i+1] = 0;
            }
            else {
                sum += abs(B[i]-A[i]);
                A[i+1] = A[i+1] - abs(B[i]-A[i]);
            }
        }
        else {
            sum += B[i];
        }
    }

    cout << sum << endl;

    return 0;
}