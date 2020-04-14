#include <bits/stdc++.h>

#define rep(i,n) for(int i=0; i<n; i++)

using namespace std;

int main() {

    int n,m,sum=0,counter=0;
    cin >> n >> m;

    int A[n];
    rep(i,n) cin >> A[i], sum+=A[i];

    rep(i,n) if(A[i]*4*m>=sum) counter+=1;

    if(n>=counter&&counter>=m) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}