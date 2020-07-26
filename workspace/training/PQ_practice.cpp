#include <bits/stdc++.h>

using namespace std;

int main() {

    priority_queue<int, vector<int>, greater<int>> que;

    que.push(3);
    que.push(1);
    que.push(4);
    que.push(1);
    que.push(5);
    que.push(9);
    que.push(2);
    que.push(6);

    int i = 0;
    while (i<5) {
        cout << que.top() << endl;
        //que.pop();
        i += 1;
    }

    return 0;
}