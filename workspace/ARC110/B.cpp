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

int main() {
    
    long long n;
    cin >> n;
    string t;
    cin >> t;

    long long cnt_zero = 0;
    for (int i = 0; i < (int)t.size(); i++) {
        if (t[i] == '0') cnt_zero++;
    }

    if (t == "1") cout << 2 * 10000000000 << endl;
    else if (t == "11") cout << 10000000000 << endl;
    else {
        if (t[n] == '0') cout << 10000000000 - cnt_zero + 1 << endl;
        else cout << 10000000000 - cnt_zero << endl;
    }

    return 0;
}