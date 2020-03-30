#include <iostream>

using namespace std;

int main()
{
    int N, Y;
    cin >> N >> Y;

    if (Y%1000==0&&Y/1000>0)
        if (0==((Y%10000)%5000)%1000)
            cout << Y/10000 << " " << (Y%10000)/5000 << " " << ((Y%10000)%5000)/1000 << endl;
        else
            cout << "-1 -1 -1" << endl;
    else
        cout << "-1 -1 -1" << endl;

    return 0;
}