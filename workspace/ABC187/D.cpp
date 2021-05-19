#include <bits/stdc++.h>
using namespace std;

bool compare_by_a(pair<int, int> a, pair<int, int> b) {
    if(a.first != b.first){
        return a.first < b.first;
    }else{
        return a.second < b.second;
    }
}

bool compare_by_b(pair<int, int> a, pair<int, int> b) {
    if(a.second != b.second){
        return a.second < b.second;
    }else{
        return a.first < b.first;
    }
}

int main() {
    
    long long n;
    cin >> n;
    vector<long long> v(n);
    long long sum4aoki = 0;
    for (int i = 0; i < n; i++) {
        long long v2aoki, v2taka;
        cin >> v2aoki >> v2taka;
        v[i] += (2 * v2aoki + v2taka);
        sum4aoki += v2aoki;
    }

    sort(v.rbegin(), v.rend());

    /*for (auto i : v) {
        cout << i << endl;
    }*/

    long long id = 0;
    while (sum4aoki >= 0) {
        sum4aoki -= v[id];
        id++;
    }

    cout << id << endl;

    return 0;
}