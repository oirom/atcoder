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
    vector<long long> a(n);
    for (long long i = 0; i < n; i++) cin >> a[i];

    long long c = a[0], b = 0;
    for (long long i = 1; i < n; i++) {
        c = gcd(c, a[i]);
    }

    cout << c << endl;

    return 0;
}