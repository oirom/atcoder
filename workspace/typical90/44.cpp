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
    
    long long n, q;
    cin >> n >> q;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<long long> t(q+10);
    vector<pair<long long, long long>> xy(q+10);
    for (int i = 0; i < q; i++) {
        cin >> t[i] >> xy[i].first >> xy[i].second;
        xy[i].first--;
        xy[i].second--;
    }

    printElements(a);
    //n--;

    for (int i = 0; i < q; i++) {
        //cout << "i : " << i << endl;

        long long cnt = 0;

        if (t[i] == 1) {
            long long tmp = a[xy[i].first - (cnt%n) - 1];
            a[xy[i].first - (cnt%n) - 1] = a[xy[i].second - (cnt%n) - 1];
            a[xy[i].second - (cnt%n) - 1] = tmp;
            printElements(a);
        } else if (t[i] == 2) {
            cnt += 1;
            cnt /= n;
            cout << "count: " << cnt << endl;
        } else if (t[i] == 3) {
            cout << a[xy[i].first - (cnt%n) - 1] << endl;
        }

        
    }

    return 0;
}