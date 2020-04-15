#include <iostream>
#define rep(i,n) for(int i=0;i<=(int)(n);i++)

using namespace std;

int main()
{
    int n, y;
    cin >> n >> y;

    rep(i,n) {
        rep(j,n-i) {
            int k = n - j - i;
            if (10000*i+5000*j+1000*k==y) {
                cout << i << " " << j << " " << k << endl;
                return 0;
            }
        }
    }

    cout << "-1 -1 -1" << endl;

    return 0;
}