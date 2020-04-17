#include <bits/stdc++.h>

#define rep(i,n) for(int i=0; i<n; i++)

using namespace std;

int main() {

    int N, M; cin >> N >> M;

    priority_queue<int, vector<int>> que;

    long int A[N]; rep(i,N) { cin >> A[i]; que.push(A[i]);}

    rep(i,M) {
        que.push(que.top()/2);
        que.pop();
    }

    long int sum=0;
    while(!que.empty()) {
        sum += que.top();
        que.pop();
    }

    cout << sum << endl;

    return 0;
}