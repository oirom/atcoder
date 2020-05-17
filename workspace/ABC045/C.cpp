#include <bits/stdc++.h>

using namespace std;

int main(){

    string s; cin >> s;

    long long sum = 0;
    int n = (int)s.size()-1;

    for (int bit=0; bit<(1<<n); bit++)
    {
        long long tmp = s[0] - '0';

        for(int i=0; i<n; i++)
        {
            if (bit&(1<<i))
            {
                sum += tmp;
                tmp = s[i+1] - '0';
            }
            else
            {
                tmp *= 10;
                tmp += s[i+1] - '0';
            }
        }
        sum += tmp;
    }

    cout << sum << "\n";

    return 0;
}