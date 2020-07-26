#include <bits/stdc++.h>

#define rep(i,n) for(int i=0; i<n; i++)

using namespace std;

int main() {

    long int n,k,diff;
    cin >> n >> k;

    diff = min(n%k, k-n%k);

    cout << diff << endl;

    return 0;
}