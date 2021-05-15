#include <bits/stdc++.h>
#define REP(i,n) for (int i=0; i<(n); ++i)
#define REPR(i,n,m) for (int i=(n); i>=(m); --i)
using namespace std;
using LL = long long;
using LD = long double;
using PLL = pair<long long, long long>;
using PLD = pair<long double, long double>;
using VLL = vector<long long>;
using VLD = vector<long double>;
using VPLD = vector<PLD>;

const int INF = numeric_limits<int>::max();

int nCr(int n, int r){
    int num = 1;
    for(int i = 1; i <= r; i++){
        num = num * (n - i + 1) / i;
    }
    return num;
}

int nPr(int n,int r){
    r = n - r;
    int sum = 1;
    int i;
    for (i=n;i>=r+1;i--)sum*=i;
    return sum;
}

int facctorialMethod(int k){
    int sum = 1;
    for (int i = 1; i <= k; ++i)
    {
        sum *= i;
    }
    return sum;
}

int main() {

    string s;
    cin >> s;

    int ans = 0;

    for (int i = 0; i <= 9999; i++) {
        vector<bool> flag(10, false);
        int tmp = i;
        for (int j = 0; j < 4; j++) {
            flag[tmp%10] = true;
            tmp /= 10;
        }

        bool flag2 = true;
        for (int j = 0; j < (int)s.size(); j++) {
            if (s[j] == 'o' && !flag[j]) flag2 = false;
            if (s[j] == 'x' && flag[j])  flag2 = false;
        }

        if (flag2) ans++;
    }

    cout << ans << endl;

    return 0;
}
