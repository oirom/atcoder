#include <bits/stdc++.h>
using namespace std;

bool is_integer( long double x ) {
    return floor(x) == x;
}

int main() {

    long double t;
    long long N;
    cin >> t >> N;

    long double mul;
    mul = t / 100;
    
    //for (int i = 0; i < N; i++){
    //    cout << i + ceil((i + 1) / mul) << endl;
    //}
        
    cout << (long long) (N-1 + ceil((N) / mul)) << endl;


    return 0;
}