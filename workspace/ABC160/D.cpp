#include <bits/stdc++.h>

using namespace std;

int main() {

    long int N, X, Y; cin >> N >> X >> Y;

    long int distance[N];
    for (int i=0; i<=N; i++) distance[i] = 0;

    for (int i=1; i<N; i++) {
        for (int j=i+1; j<=N; j++) {
            long int a = abs(j-i);
            long int b = abs(X-i)+1+abs(Y-j);
            long int c = min(a, b);
            long int d = abs(Y-i)+1+abs(X-j);
            long int e = min(c, d);
            distance[(int)e] += 1;
        }
    }

    for (int i=1; i<N; i++) cout << distance[i] << endl;

    
    return 0;
}