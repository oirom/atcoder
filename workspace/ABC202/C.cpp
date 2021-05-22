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

template<typename T>
void printElements(T &v)
{
    cout << "[ ";
    for (const auto &item : v) {
        cout << item << ", ";
    }
    cout << "\b\b ]" << endl;
}

long long gcd(long long x, long long y) { return (x % y)? gcd(y, x % y): y; }
long long lcm(long long x, long long y) { return x / gcd(x, y) * y; }

int main() {

    long long n;
    cin >> n;
    vector<long long> a(n+1), b(n+1), c(n+1);
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];
    for (int i = 1; i <= n; i++) cin >> c[i];

    vector<long long> bcj(n+1, 0);
    for (int j = 1; j <= n; j++) {
        //cout << j << endl;
        //cout << "cj: " << c[j] << ", bcj: " << b[c[j]] << endl;
        bcj[b[c[j]]]++;
    }

    //printElements(bcj);

    long long ans = 0;
    for (int i = 1; i <= n; i++) {
        ans += bcj[a[i]];
    }

    cout << ans << endl;

    return 0;
}