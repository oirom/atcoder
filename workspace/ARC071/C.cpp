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

    int n;
    cin >> n;
    vector<string> v(n);
    int minlen = 100;
    int minleni = 0;
    for (int i = 0; i < n; i++) {
        string t;
        cin >> t;
        sort(t.begin(), t.end());
        v[i] = t;

        if (minlen < (int)t.size()) {
            minlen = (int)t.size();
            minleni = i;
        }
    }

    string str = v[minleni];
    
    for (int i = 0; i < n; i++) {

        string tmp = "";
        if (i == minleni) continue;

        for (auto s : str) {
            if (v[i].find(s) != string::npos) {
                tmp += s;
                v[i][v[i].find(s)] = '0';
            }
        }
        
        //cout << tmp << endl;
        str = tmp;
    }
    
    cout << str << endl;

    return 0;
}