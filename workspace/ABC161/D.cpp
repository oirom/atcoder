#include <bits/stdc++.h>

#define rep(i,n) for(int i=0; i<n; i++)

using namespace std;

int main() {

    int k;
    cin >> k;

    vector<long int> L{1,2,3,4,5,6,7,8,9}, tmp{1,2,3,4,5,6,7,8,9}, tmp2;

    rep(j,9) {  

        rep(i,tmp.size()) {
            if (tmp[i]%10!=0) tmp2.push_back(10*tmp[i]+(tmp[i]%10-1));
            tmp2.push_back(10*tmp[i]+(tmp[i]%10));
            if (tmp[i]%10!=9) tmp2.push_back(10*tmp[i]+(tmp[i]%10+1));
        }

        copy(tmp2.begin(), tmp2.end(), back_inserter(L));
        tmp.erase(tmp.begin(), tmp.end());
        copy(tmp2.begin(), tmp2.end(), back_inserter(tmp));
        tmp2.erase(tmp2.begin(), tmp2.end());
    }

    sort(L.begin(), L.end());

    cout << L[k-1] << endl;
    
    return 0;
}