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

    unsigned long long a, b, k;
    cin >> a >> b >> k;

    unsigned long long b_loc = (k - 1) / b;

    unsigned long long bit = (k - 1) / b + 1;
    string pre = "";
    for (int i = 0; i < a; i++) {
        if ((1 & (bit >> i)) == 1) pre += 'b';
        else pre += 'a';
    }
    reverse(pre.begin(), pre.end());
    cout << pre << endl;

    

    return 0;
}