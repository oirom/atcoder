#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define rep1(i,n) for(int i=1;i<(int)(n);i++)
#define abs(a,b) sqrt((a - b) * (a - b))

int main(){

    int n;
    cin >> n;

    int t[n+1], x[n+1], y[n+1];
    t[0] = x[0] = y[0] = 0;

    rep1(i,n+1){
        cin >> t[i] >> x[i] >> y[i];
    }

    int T, D;
    bool can = true;
    rep(i,n){
        T = t[i+1] - t[i];
        D = abs(x[i+1], x[i]) + abs(y[i+1], y[i]);
        if(D<=T){
            can = true;
        }
        else{
            can = false; break;
        }
    }

    if (can) {
        cout << "YES" << endl;
    }
        
    else {
        cout << "NO" << endl;
    }
    
    return 0;
}